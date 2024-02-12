#include<iostream>
using namespace std;
        class sll
        {
        class node
        {
            public:
            int data;
            node *next;
            public:
            node(int data)
            {
                this->data=data;
                this->next=NULL;
            } 
        };

        
        public:
        node *head;
        sll()
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
            
            node *temp=head;

            while(temp->next!=NULL)
            {
                temp=temp->next;

            }
            temp->next=newnode;
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
            cout<<endl;

        }

        }; 
    int main()
    {
        sll s;
        
        s.insertLast(1);
        s.insertLast(2);
        s.insertLast(3);
        s.display();
        

return 0;
    }