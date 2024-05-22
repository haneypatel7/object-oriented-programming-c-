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
    int c=5;
    int d=4;

    swap(c,d);

    cout<<"c is:"<<c<<endl;

    cout<<"d is:"<<d<<endl;


    return 0;
}