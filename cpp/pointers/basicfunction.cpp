#include<iostream>
using namespace std;
#include<conio.h>

void swap(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{   

    int a,b,c;
    a=2;
    b=4;

    swap(a,b);
    cout<<a<<b<<endl;
    
    
    
    

    return 0;
}