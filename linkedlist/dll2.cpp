#include<iostream>
#include<ctime>
#include<functional>
#include<iomanip>
using namespace std;

class dll
{


    hash<int>gethash;
    size_t result1=gethash(data);

    time_t currtime=time(NULL);
    string resulttime=ctime(&currtime);


    public:
    class node
    {
        public:
        int data;
        node *prev;
        node *next;
        
        public:
        node(int data)
        {
            this->data=data;
            this->next=NULL;
            this->prev=NULL;
        }
    };

    node *head=NULL;

    public:
    void insertlast(int data)
    {
        node *temp=head;
        node *newnode=new node(data);

        if(head==NULL)
        {
            cout<<"data inserted"<<endl;
            head=newnode;
        }
        else{
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=newnode;
            cout<<"data inserted"<<endl;

            
        }

    }

    public:
    void display()
    {
        node *temp=head;
        while (temp!=NULL)
        {
            cout<<temp->prev;
            cout<<temp->data<<endl;
            cout<<temp->next;
            temp=temp->next;
        }
        
    }



};

int main()
{
    dll d;
    d.insertlast(12);
    d.insertlast(13);

    d.insertlast(14);
    d.display();


    return 0;
}