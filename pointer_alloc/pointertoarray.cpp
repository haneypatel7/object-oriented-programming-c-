#include<conio.h>
#include<iostream>
using namespace std;

class manager
{
    int id;
    int age;
    public:

    void setdata(int a,int b)
    {
        id=a;
        age=b;
    }

    void getdata()
    {
        cout<<"ID is:"<<id<<endl;
        cout<<"AGE is:"<<age<<endl;
    }
};

int main()
{
    int msize;
    cout<<"enter number of manager details you want to insert"<<endl;
    cin>>msize;
    manager *ptr=new manager[msize];
    manager *temp=ptr;
    int p,q,i;
    for(i=0;i<msize;i++)
    {
        cout<<"enter "<<i+1<<" manager details"<<endl;
        cout<<"enter manager id:"<<endl;
        cin>>p;
        cout<<"enter manager age:"<<endl;
        cin>>q;
        ptr->setdata(p,q);
        cout<<"data inserted"<<endl;
        ptr++;
    }


    for(i=0;i<msize;i++)
    {
        temp->getdata();
        temp++;
    }


    
}