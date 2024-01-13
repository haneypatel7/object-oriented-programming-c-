#include<iostream>
using namespace std;

class a
{
    int age=21;
    public:
    void display()
    {
            cout<<"age is"<<age<<endl;
    }
};

class b: public a
{

    int rollno=10;
    public:
    void display()
    {
        cout<<"rollno is :"<<rollno<<endl;
    }

};

int main()
{
    a * a_class_pointer;
    a a1;
    b b1;
    a_class_pointer=&b1;
    a_class_pointer->display();
    return 0;
}