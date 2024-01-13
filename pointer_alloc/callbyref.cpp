#include<iostream>
#include<conio.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a=5;
    int b=4;

    swap(a,b);

    cout<<"a is:"<<a<<endl;

    cout<<"b is:"<<b<<endl;


    return 0;
}