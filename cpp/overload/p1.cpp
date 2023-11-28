// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class marks
{
    int marks1,marks2;
    public:
    marks()
    {
        marks1=0;
        marks2=0;
    }
    marks(int a,int b)
    {
        marks1=a;
        marks2=b;
    }
    marks operator+(marks m)
    {
        marks temp;
        temp.marks1=marks1+m.marks1;
        temp.marks2=marks2+m.marks2;
        return temp;
    }
    public: void display()
    {
        cout<<"marks1 is:"<<marks1<<endl;
        cout<<"marks2 is:"<<marks2<<endl;
    }
};

int main() {
    
    marks m1(10,20),m2(20,40);
    marks m3=m1+m2;
    m3.display();
    return 0;
}