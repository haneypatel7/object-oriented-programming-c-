//using plus overload you can add object value
//example complex number

#include<iostream>
using namespace std;

class complex
{
    int imag;
    int real;
    public:
    complex()
    {
        imag=0;
        real=0;

    }

    complex(int a,int b)
    {
        imag=a;
        real=b;

    }
    void getdata()
    {
        cout<<"imag number is:"<<imag<<endl;
        cout<<"real number is:"<<real<<endl;
    }


    complex operator-(complex r)
    {
        complex temp;
        temp.imag=imag-r.imag;
        temp.real=real-r.real;
        return temp;
    }


};

int main()
{
    complex c1(30,40);
    complex c2(15,10);
    complex c3=c1-c2;
    c3.getdata();


    return 0;
}