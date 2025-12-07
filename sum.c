#include<stdio.h>
int main()
{
    int arr[100];
    int i,n,sum=0;
    printf("how many number you want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the number:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum =sum+arr[i];
    }
    printf("sum of number is:%d",sum);
    return 0;
    
}