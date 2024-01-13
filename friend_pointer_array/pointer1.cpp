#include<iostream>
using namespace std;
#include<conio.h>

int main()
{


    int a=10;
    int *ptr;
    //here ptr(pointer) point to adderess of a then it store the value of a;
    
    ptr=&a;
    //*ptr it means derefrence of pointer
    cout<<"values  is  :"<<*ptr<<endl; 
    //adderess increase value by 4 bytes or 2 bytes
    ptr++;
    cout<<"values  is  :"<<ptr<<endl;
    return 0;
}