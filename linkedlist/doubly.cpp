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

    void insertfirst(int data)
    {
        node* newnode=new node(data);
        if(head==NULL)
        {
            head=newnode;
            cout<<"data inserted successfully"<<endl;
        }
        else
        {
            newnode->next=head;
            head=newnode;
            cout<<"data inserted"<<endl;
        }
    }
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
    void deletefirst()
    {
        if(head==NULL)
        {
            cout<<"block is empty"<<endl;
        }
        else
        {
            head=head->next;
            cout<<"data deleted"<<endl;
        }
    }

    void deletelast()
    {
        node *temp=head;
        if(head==NULL)
        {
            cout<<"block is empty"<<endl;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            temp->prev=NULL;
            cout<<"data deleted"<<endl;
        }
    }
};

int main()
{
    dll d;
    d.insertfirst(3);
    d.insertfirst(2);
    d.insertfirst(1);
    
    d.display();
    d.deletelast();
    d.display();
    
    return 0;
}