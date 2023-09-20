// Online C compiler to run C program online
#include <stdio.h>
struct name
    {
        char empname[20];
        int empno;
    };
int main() {
    
struct name value={"haneypatel",1};
printf("your name is %s\n  your number is %d\n",value.empname,value.empno);
    return 0;
}