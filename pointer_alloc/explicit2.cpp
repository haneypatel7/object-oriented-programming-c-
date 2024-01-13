#include<stdio.h>
#include<conio.h>
#include <cstdlib>
#include<iostream>
using namespace std;

class maths
{
    int a,b,c,d;
    public:
    void set()
    {   
        cout<<"enter a"<<endl;
        cin>>a;
        cout<<"enter b"<<endl;
        cin>>b;
        cout<<"enter c"<<endl;
        cin>>c;
        cout<<"enter d"<<endl;
        cin>>d;
    }

    int perimerter()
    {
        return (a+b+c+d);
    }

    void compare(maths m)
    {
        if(perimerter()>m.perimerter())
        {
            cout<<"first rect is BIG"<<endl;
        }
    }

};

int main()
{
    maths m1,m2;
    m1.set();
    m2.set();
    m1.perimerter();
    m2.perimerter();

    m1.compare(m2);
}