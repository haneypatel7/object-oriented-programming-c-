#include<iostream>
using namespace std;
#include<stdio.h>
class haney
{
    int age=0;
    public:
    friend class patel;

    void display()
    {
        cout<<"age is:"<<age;
    }
};
class patel
{
    public:
    void set(haney h1)
    {
        h1.age=21;
        cout<<h1.age;
    }
    
};

int main()
{
    haney h;
    patel p1;
    p1.set(h);
    
    return 0;

}