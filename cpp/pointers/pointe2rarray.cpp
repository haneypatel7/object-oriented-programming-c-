#include<iostream>
using namespace std;
#include<conio.h>

int main()
{   
    int *a,n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    a=new int[n];

    for(int i=0;i<n;i++)
    {   
        cout<<"enter the value at:"<<i<<" position"<<endl;
        cin>>*(a+i);
    }

    return 0;
}