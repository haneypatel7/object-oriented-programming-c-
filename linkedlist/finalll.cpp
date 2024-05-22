#include<bits/stdc++.h>
#include<functional>
#include<iostream>
using namespace std;
class dll
{
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

    void insertdata(int data)
    {
        node *temp=head;
        node *newnode=new node(data);
        if(head==NULL)
        {
            head=newnode;
            cout<<"data inserted"<<endl;

        }
        else
        {
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=newnode;
            cout<<"data inserted"<<endl;
            

        }
    }

};


int main()
{
    dll dd;
    dd.insertdata(12);
    return 0;
}