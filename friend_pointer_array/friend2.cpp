#include<iostream>
using namespace std;
#include<conio.h>

class demo
{   
    private:
    int a;
    int b;
    public:
    void getdata();

    frined int sum(demo);

}

void demo::getdata()
{
    cout<<"enter the a:"<<endl;
    cin>>a;
    cout<<"enter the b:"<<endl;
    cin>>b;
}

int sum(demo a1)
{
   return (a1.a+a1.b);
}


int main()
{
    demo a1;
    a1.getdata();
    cout<<sum(a1);
    return 0;
}