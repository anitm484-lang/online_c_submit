// wap to find the smallest and largest number without taking input from the user.
#include<stdio.h>
int main()
{
    int i;
    int large,small;
    int num[100];
   
    for(i=0;i<7;i++)
    {
        printf("enter the number:");
        scanf("%d",&num[i]);
    }
    large = small = num[0];
    for(i=0;i<7;i++)
    {
        if(large<num[i])
        large = num[i];
        if(small>num[i])
        small =num[i];
    }
    printf("largest number is:%d",large);
    printf("smallest number is:%d",small);
    return 0;
}