#include<stdio.h>
#include<iostream>
using namespace std;

class aa
    {
        int a,b;
        public:

        aa()
        {
            a=0;
            b=0;
        }
        
        void set(int x,int y)
        {
            if(x>18 && y>18)
            {
                a=x;
                b=y;
            }
            else
            {
                cout<<"invlaid values"<<endl;

            }
        }
        void display()
        {
            cout<<"a is:"<<a<<endl;
            cout<<"b is:"<<b<<endl;
            
        }

    };

    int main()
    {
        aa a1;
        a1.set(12,12);
        a1.display();

    return 0;
        
    }