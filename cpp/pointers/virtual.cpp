#include<conio.h>
#include<iostream>
using namespace std;

class a
{
public:
    virtual void display()
    {
        cout<<"inside A"<<endl;
    }
};

class b : public a
{
    public:
    void display()
    {
        cout<<"inside B"<<endl;
    }

};

int main()
{
   b bb;
   a aa;
   bb.display(); 
   aa.display();


    return 0;
}  


