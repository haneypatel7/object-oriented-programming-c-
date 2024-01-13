#include<stdio.h>
#include<conio.h>
#include <cstdlib>
#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr=(int *)malloc(3*sizeof(int));

    for(int i=0;i<3;i++)
    {
        cin>>ptr[i];
    }

    for(int i=0;i<3;i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}