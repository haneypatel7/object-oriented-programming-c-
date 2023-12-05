#include<stdio.h>
#include<iostream>
using namespace std;

class student

    {

        int marks1,marks2;
        public:
        student()
        {
            marks1=0;
            marks2=0;
        }

        student(int a,int b)
        {
            marks1=a;
            marks2=b;
        }
    student operator+(student s)
    {
        student temp;
        temp.marks1=marks1+s.marks1;
        temp.marks2=marks2+s.marks2;
        return temp;
    }

    void display()
    {
        cout<<marks1;
        cout<<marks2;
    }

    student operator-(student s);

    };

student student :: operator-(student s)
{
        student temp;
        temp.marks1=marks1-s.marks1;
        temp.marks2=marks2-s.marks2;
        return temp;

}
    int main()
    {
        student s1(12,22),s2(10,20);
        
        student s3=s1+s2;
        student s4=s1-s2;
        s3.display();
        s4.display();
        
        
    }