#include<iostream>
using namespace std;

class test{

int a;
public:
test()
{
    a=0;
}
void setdata()
{
    cout<<"enter a"<<endl;
    cin>>a;
}

void getdata()
{
    cout<<a<<endl;
}

void operator=(test t)
{
   a=t.a;
}


};



int main()
{


    test t1,t2;
    t1.setdata();
    t2=t1;
    t2.getdata();

    return 0;
}