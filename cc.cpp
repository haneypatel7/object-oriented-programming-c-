#include<iostream>
using namespace std;
class test
{
    public:
    int a;
    test()
    {
        cout<<"cons called default"<<endl;
        a=12;
    }

    test(test &o)
    {
        cout<<"copy cons called"<<endl;
        a=o.a;
    }

};

int main()
{
    test t1;
    test t2(t1);
    


    return 0;
}