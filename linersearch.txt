#include<stdio.h>

int main()
{
    int array[5];
    int i;
    int key;
    printf("enter the 5 number\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter the value you want to find in array");
    scanf("%d",&key);
    for(i=0;i<5;i++)
    {
        if(array[i]==key)
        {
            printf("your index posion is %d\n",i);
        }
        else
        {
            printf("there are nothing find here");
        }
    }
    
    return 0;
}