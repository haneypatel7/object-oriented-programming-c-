// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class complex
{
    int real,imag;
    public:
    
    complex()
    {
        real=0;
        imag=0;
    }
    complex(int a,int b)
    {
        real=a;
        imag=b;
    }
    
    complex operator +(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
        
    }
};

int main() {
    
    complex c1(1,2);
    complex c2(4,3);
    complex c3;
    c3=c1+c2;
        
    
    return 0;
}