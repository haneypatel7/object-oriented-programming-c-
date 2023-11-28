// overload minus

#include<iostream>
using namespace std;

class number
{
    int number1,number2;
    public:
    number()
    {
        number1=0;
        number2=0;

    }
    number(int a,int b)
    {
        number1=a;
        number1=b;
    }




    number operator-(number n)
    {
        number temp;
        temp.number1=number1-n.number1;
        temp.number2=number2-n.number2;
        return temp;
    }

    void display()
{
    cout<<number1<<endl;
    cout<<number2<<endl;
}

};
int main()
{   

    number n1(10,20),n2(5,10);
    number n3=n1-n2;
    n3.display();
    return 0;
}