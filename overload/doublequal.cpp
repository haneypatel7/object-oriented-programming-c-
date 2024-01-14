#include<iostream>
using namespace std;

class test{

    int a;
    public :
    test()
    {
        a=0;
    }

    void setdata(int a)
    {
        this->a=a;
    }

    void getdata()
    {
        cout<<a;
    }

    bool operator==(test t)
    {
        if(a==t.a)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};


int main()
{
    test t1,t2;
    t1.setdata(12);
    t2.setdata(13);

    if(t1==t2)
    {
        cout<<"equal object properties"<<endl;
    }
    else
    {
        cout<<"not equal"<<endl;
    }




    return 0;
}