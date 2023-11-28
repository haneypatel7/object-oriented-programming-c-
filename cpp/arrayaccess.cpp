
#include <stdio.h>

int main() {
    int array[10];
    int i;
    printf("enter 10 number\n");
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
        
    }
    for(int i=0;i<10;i++)
    {
    printf("you enterd %d\n",array[i]);
    }
    return 0;
}