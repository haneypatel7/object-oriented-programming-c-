#include<stdio.h>
#include<conio.h>
#include <cstdlib>
#include<iostream>
using namespace std;
class rectangle
{
    int l,b;

    public:
    void set()
    {   
        cout<<"enter l"<<endl;
        cin>>l;

        cout<<"enter b"<<endl;
        cin>>b;
    }

    int cal_area()
    {
        return (l*b);
    }
    void compare(rectangle r)
    {
        if(cal_area()>r.cal_area())
        {
            cout<<"rectangle 1 is big"<<endl;
        }
        else
        {
            cout<<"rectangle 2 is big"<<endl;
        }
    }
};
int main()
{
    rectangle r1,r2;
    r1.set();
    r2.set();

    r1.cal_area();
    r2.cal_area();

    r1.compare(r2);
    return 0;

}