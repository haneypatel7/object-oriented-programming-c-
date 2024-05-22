#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A()
    {
        a=0;
    }


friend void display(A &obj);
};

void display(A &obj)
{
    cout<<obj.a;
}

int main()
{

    A a1;
    display(a1);
    return 0;
}