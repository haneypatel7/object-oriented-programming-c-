#include<conio.h>
#include<iostream>
using namespace std;

class student
{
    int a;
    public:
    student()
    {
        cout<<"default constustor called"<<endl;
    }

    student(int x)
    {   
        cout<<"parameter cons calles"<<endl;
        a=x;
        cout<<"a is:"<<a<<endl;
    }


    student(student &obj)
    {
        a=obj.a;
        cout<<"copy a is:"<<a<<endl;
    }
};
int main()
{
    student s1,s2(12);

    student s3(s2);

}