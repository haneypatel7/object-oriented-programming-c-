#include<iostream>
using namespace std;

class test
{
    int a;
    public:
    test()
    {
        a=0;
    }

    test(int a)
    {
        this->a=a;
    }

    void display()
    {
        cout<<a<<endl;
    }

    test operator *(test t)
    {
        test temp;
        temp.a=a*t.a;
        return temp;
    }

};


int main()
{
    test t1(12),t2(4);
    test t3=t1*t2;
    t3.display();
}