#include<stdio.h>
int main()
{
    int i,n;
    int sum = 0;
    int num[100];
    printf("enter the number that how many you want:\n");
    scanf("%d",&n);
    printf("enter the number:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=1;i<=n;i++)
    {
        sum = sum+num[i];
    }
    printf("the sum is:%d",sum);
    return 0;
}