#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
    int *ptr;
    int n;
    cout<<"enter size of array"<<endl;
    ptr=new int[n];

    for(int i=0;i<n;i++)
    {   
        cout<<"enter the value"<<endl;
        cin>>ptr[i];
    }

    delete[]ptr;


    return 0;
}