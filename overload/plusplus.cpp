#include<iostream>
using namespace std;
//using ++ overload overload the object propertie ++


class demo
{
    int a;
    public:
    demo()
    {
        a=0;
    }
    demo(int x)
    {
        a=x;
    }


    void operator ++()
    {
        a=a+1;
    }

    void getdata()
    {
        cout<<"after the overload object value"<<a<<endl;
    }


};

int main()
{
    demo a;
    ++a;
    a.getdata();



    return 0;
}