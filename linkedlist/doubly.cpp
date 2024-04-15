#include<iostream>
using namespace std;

class dll
{
    class node
    {
        public:
        int data;
        node* next;
        node* prev;
        public:
        node(int data)
        {
            this->data=data;
            this->next=NULL;
            this->prev=NULL;
        }

    };
    node * head=NULL;
    public:

    
    public:
    void display()
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }

    void insertLast(int data)
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
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=newnode;
            cout<<"inserted data at last sucessfully"<<endl;
        }

    }
    
};

int main()
{
    dll d;
    // d.insertfirst(3);
    // d.insertfirst(2);
    // d.insertfirst(1);
    d.insertLast(1);
    d.insertLast(2);
    d.insertLast(3);
    d.display();
    // d.deletelast();
    d.display();
    
    return 0;
}