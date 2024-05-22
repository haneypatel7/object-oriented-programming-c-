#include<iostream>
#include<ctime>
#include<string>
using namespace std;

class dlltest
{
    class node
    {
        public:
        int data;
        node *prev;
        node *next;
        node(int data)
        {
            this->data=data;
            this->next=NULL;
            this->prev=NULL;
        }
    };

    node *head=NULL;

    public: 
    void display()
    {
        node *temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data;
            temp=temp->next;
        }
        

    }

    public:

    void insertlast(int data)
    {
        node *temp=head;
        node *newnode=new node(data);
        if(head==NULL)
        {
            head=newnode;
            cout<<"data inserted successfully"<<endl;
        }

        else
        {
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=newnode;
            cout<<"data inserted successfully"<<endl;
            

        }
    }


};

int main()
{
    dlltest dl;
    dl.insertlast(12);
    dl.insertlast(13);
    dl.insertlast(14);
    dl.display();

    return 0;
}