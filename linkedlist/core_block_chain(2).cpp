#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <ctime>
using namespace std;

hash<string> to_hash;

// transaction class
class Transaction
{
public:
    string sender, reciver;
    unsigned int amount;

    Transaction() {}

    Transaction(string sender, string reciver, unsigned int amount)
    {
        this->sender = sender;
        this->reciver = reciver;
        this->amount = amount;
    }
};

// block class
class block
{
public:
    int index;
    unsigned int nonse, prev_hash, curr_hash, merkleroot;
    time_t timestamp;
    vector<Transaction> alltransaction;


    block(int index, unsigned int nonse ,unsigned int prev_hash,
         unsigned int curr_hash, time_t timestamp, 
         vector<Transaction> alltransaction, unsigned int merkleroot)
    {
        this->index = index;
        this->nonse = nonse;
        this->prev_hash = prev_hash;
        this->curr_hash = curr_hash;
        this->nonse = nonse;
        this->timestamp = timestamp;
        this->alltransaction = alltransaction;
        this->merkleroot = merkleroot;
    }
};


//chain class
class chain
{
    public:

        list<block> li;
        vector<Transaction> alltrans;
        vector<unsigned int> alltrans_hash;
        unsigned int prev_hash;

        chain()
        {
            time_t timestamp = time(nullptr);
            prev_hash = 0;
            block *curr = new block(0,0,prev_hash,0,timestamp,alltrans,0);
            li.push_back(*curr);
        }


        //block hash genratore
        unsigned int gen_block_hash(unsigned int prev_hash ,
                                    unsigned int merkleroot , 
                                    unsigned int nonse)
        {
            string hash_val = to_string(prev_hash) + to_string(merkleroot) + to_string(nonse);
            unsigned int block_hash = to_hash(hash_val);
            return block_hash;
        }


        //transaction hash genratore
        unsigned int gen_pair_trans(unsigned int h1 , unsigned int h2)
        {
            return h1+h2;
        }

        //genrate merkel root
        unsigned int gen_merkelroot(vector<unsigned int> alltrans_hash_copy)
        {

            if(alltrans_hash_copy.size() == 0)
            {
                return 0;
            }

            if(alltrans_hash_copy.size() == 1)
            {
                return alltrans_hash_copy[0];
            }

            vector<unsigned int> newhash_copy;
            for(int i = 0 ; i<alltrans_hash_copy.size() - 1 ; i = i+2)
            {
                newhash_copy.push_back(gen_pair_trans(alltrans_hash_copy[i] , alltrans_hash_copy[i+1]));
            }
            if(alltrans_hash_copy.size()%2 == 1)
            {
                newhash_copy.push_back(gen_pair_trans(alltrans_hash_copy.back(),alltrans_hash_copy.back()));
            }

            return gen_merkelroot(newhash_copy);
        }


        //make trascation method
        void make_transaction()
        {
            string sender , reciver;
            unsigned int amount;

            cout<<"Enter Sender Name : ";
            cin>>sender;
            cout<<"Enter Reciver Name : ";
            cin>>reciver;
            cout<<"Enter Amount : ";
            cin>>amount;

            unsigned int curr_tras_hash = to_hash(to_string(amount) + sender + reciver);

            Transaction t(sender,reciver,amount);
            alltrans.push_back(t);
            alltrans_hash.push_back(curr_tras_hash);
        }

        //create and add block
        void create_block()
        {
            time_t timestamp = time(nullptr);
            unsigned int nonse = 0;
            unsigned int merkelroot = gen_merkelroot(alltrans_hash);
            unsigned int curr_hash = gen_block_hash(prev_hash , merkelroot , nonse);
            block *curr = new block(li.size() , nonse , prev_hash , curr_hash , timestamp , alltrans , merkelroot);
            li.push_back(*curr);
            prev_hash = curr_hash;
            alltrans.clear();
            alltrans_hash.clear();
        }


        //display Transaction
        void display_transaction(vector<Transaction> alltranscopy)
        {
            for(auto t : alltranscopy)
            {
                cout<<endl;
                cout<<"-------- Transdaction ------------"<<endl;
                cout<<"sender : "<<t.sender<<endl;
                cout<<"reciver : "<<t.reciver<<endl;
                cout<<"amount : "<<t.amount<<endl;
            }
        }

        //display block
        void display_block()
        {
            list<block>::iterator itor;

            for(itor = li.begin() ; itor != li.end() ; itor++)
            {
                cout<<endl<<endl;
                cout<<"---------------- BLOCK "<<itor->index<<"----------------------"<<endl;
                cout<<"Block Nonse : " <<itor->nonse<<endl;
                cout<<"Block Time :"<<itor->timestamp<<endl;
                cout<<"Block prevhash :"<<itor->prev_hash<<endl;
                cout<<"Block hash :"<<itor->curr_hash<<endl;
                cout<<"Block merkle root :"<<itor->merkleroot<<endl;
                display_transaction(itor->alltransaction);
            }
        }
};


int main()
{
    chain c;
    
    int choice;

    do
    {
        cout<<endl;
        cout<<"1.Mine A Block"<<endl;
        cout<<"2.Display Block"<<endl;
        cout<<"0.Exit"<<endl;

        cout<<"Enter Your Choice : "<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1 :  int inner_choice;
                    do
                    {
                        cout<<endl;
                        cout<<"1.make transaction"<<endl;
                        cout<<"2.create Block"<<endl;
                        
                         cout<<"Enter Your Choice : "<<endl;
                         cin>>inner_choice;

                         switch (inner_choice)
                         {
                         case 1 : c.make_transaction();
                                  break;

                         case 2 : c.create_block();
                                  inner_choice = 0;
                                  break;
                         
                         default: cout<<"Invalid Choice...."<<endl;
                                  break;
                         }

                    } while (inner_choice != 0);
                    break;

        case 2 : c.display_block();
                 break;

        case 0 : choice = 0;
                 break;
        
        default: cout<<"Invalid Choice....."<<endl;
            break;
        }
    } while (choice != 0);
    

    return 0;
}