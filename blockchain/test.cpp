#include <iostream>
#include <string>
#include <ctime>
#include <list>
#include <vector>

using namespace std;

class Transactions{
    public:

    string sender;
    string receiver;
    unsigned int amt;

    Transactions(string sender,string receiver,unsigned int amt){
        this->sender = sender;
        this->receiver = receiver;
        this->amt = amt;
    }
};
class Block{

    public:

    int index;
    string prevhash;
    string currhash;
    time_t timestamp;
    vector<Transactions> transactions;

    Block(int index,string prevhash,string currhash,time_t timestamp,vector<Transactions> transactions){
        this->index = index;
        this->prevhash = prevhash;
        this->currhash = currhash;
        this->timestamp = timestamp;
        this->transactions = transactions;
    }

};
class blockchain{
    private:
    string prevhash;
    list<Block> chain;

    public:
    blockchain(){
        time_t timestamp = time(nullptr);
        Block genesis(0 , "0","",timestamp,{});
        chain.push_back(genesis);
        prevhash = "0";
    }

    void addtransaction(string sender,string receiver,unsigned int amt){
        Transactions newtransactions(sender,receiver,amt);
        chain.back().transactions.push_back(newtransactions); 
    }
    void mineblock(){

        time_t timestamp = time(nullptr);
        Block newblock(chain.size(),prevhash,"",timestamp,chain.back().transactions);
        chain.push_back(newblock);
        prevhash = newblock.currhash;
        chain.back().currhash = calc_hash(newblock);
        chain.back().transactions.clear();
    }
    string calc_hash(const Block &block){
        string data = to_string(block.index) + block.prevhash + to_string(block.timestamp);

        for(const auto &transactions : block.transactions){
            data += transactions.sender + transactions.receiver + to_string(transactions.amt);
        }
        return to_string(hash<string>{}(data));
    }

    void display(){
        for(const auto &block : chain){
            cout<<"------------------Block----------------";
            cout<<"Index: "<<block.index <<endl;
            cout<<"Previous Hash:  "<<block.prevhash<<endl;
            cout<<"Current Hash:  "<<block.currhash<<endl;
            cout<<"Prevhash:  "<< asctime(localtime(&block.timestamp))<<endl;
            cout<<"Transactions: "<<endl;
            for(const auto &transactions : block.transactions ){
                cout<<"Sender: "<<transactions.sender << "Receiver: "<<" "<<transactions.receiver<<" "<<"Amount: "<<transactions.amt<<endl;
            }
            cout<<"-----------------------------------------";
        }

    }
};

int main(){

    blockchain chain;
    int choise;
    string sender,receiver;
    unsigned int amt;


    do{
        cout<<"0.Exit"<<endl;
        cout<<"1.Add new Transactions"<<endl;
        cout<<"2.Mine Block"<<endl;
        cout<<"3.Display"<<endl;
        
        cout<<"Enter your choise: "<<endl;
        cin>>choise;

        switch (choise)
        {
        case 1:
                cout<<"Sender Name: "<<endl;
                cin>>sender;
                
                cout<<"Receiver Name: "<<endl;
                cin>>receiver;

                cout<<"Amount: "<<endl;
                cin>>amt;

                chain.addtransaction(sender,receiver,amt);
                break;
        case 2:
                chain.mineblock();
                break;
        case 3:
                chain.display();
                break;
        default:
                cout<<"You enter the Wrong Choise";
                break;
        }


    }while (choise != 0);
    
    return 0;
}
