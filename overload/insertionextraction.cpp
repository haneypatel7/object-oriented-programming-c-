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

    friend ostream & operator<<(ostream &out,test &c);
    friend istream & operator>>(istream &in,test &c);

};

ostream & operator<<(ostream &out,test &c)
{
    out<<c.a;
    return out;
}

istream &operator>>(istream &in,test &c)
{
    cout<<"enter number a"<<endl;
    in>>c.a;
    return in;
}

int main()
{
    test t1;
    cin>>t1;
    cout<<t1;


    return 0;
}