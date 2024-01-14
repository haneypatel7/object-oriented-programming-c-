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
        cout<<real<<endl;
        cout<<imag<<endl;
    }


    complex operator*(complex r)
    {
        complex temp;
        temp.imag=imag*r.imag;
        temp.real=real*r.real;
        return temp;
    }


};

int main()
{
    complex c1(12,13);
    complex c2(12,13);
    complex c3=c2*c1;
    c3.getdata();


    return 0;
}