#include<iostream>
using namespace std;
class singlyll
{
    
    class node
    {
        public:
        int data;
        node *next;
        
        node(int data)
        {
            this->data=data;
            this->next=NULL;
        }
    };
    
    public:
    node *head;
    singlyll()
    {
        head=NULL;
    }

    void insertLast(int data)
    {
        node *newnode=new node(data);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        else
        {
        node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
            temp->next=newnode;
        }
    }

    void display()
    {
        node *temp=head;
        while(temp!=NULL)
        {
            
            cout<<temp->data;
            temp=temp->next;

        }
    }
};
int main()
{
    singlyll s;
    s.insertLast(1);
    s.insertLast(2);
    s.insertLast(3);
    s.display();
    return 0;
}
    
