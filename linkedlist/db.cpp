#include<iostream>
using namespace std;

class dll
{
    class node
    {
        public:
        node*prev;
        node*next;
        string data;
        string time_stamp;
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
            head=newnode;
        }
        else
        {
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=newnode;
            
        }
    }
    void display()
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};
int main()
{
    dll d;
    d.insertlast(1);
    d.insertlast(2);
    d.insertlast(3);
    d.display();
    
    return 0;
}
