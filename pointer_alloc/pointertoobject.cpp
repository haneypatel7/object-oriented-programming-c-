#include<conio.h>
#include<iostream>
using namespace std;

class test
{
    int a,b;
    public:
    void setdata()
    {   
        cout<<"enter a"<<endl;
        cin>>a;
        cout<<"enter b"<<endl;
        cin>>b;
    }
    void getdata()
    {
        cout<<"a is"<<a<<endl;
        cout<<"b is"<<b<<endl;
    }


};

int main()
{   
    test *t1=new test;
    t1->setdata();
    t1->getdata();


    return 0;
}