#include<iostream>
using namespace std;
#include<conio.h>


class A
{
    private:
    int a=0;
    int b=0;
    public:
    friend class B;
    void display()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

class B
{
public:
    void add(A r)
    {
        r.a=10;
        r.b=20;
        cout<<r.a<<endl;
        cout<<r.b<<endl;
    }

};

int main()
{
    A a1;
    B b1;
    a1.display();
    b1.add(a1);
    
    return 0;
}
