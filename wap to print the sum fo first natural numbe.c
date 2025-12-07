#include<stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("the numbere is negative integer \n");
    }
    else{
    while(i<=n)
    {
        sum +=i;
        i++;
    }
    printf("the sum of the first natural number is:%d  \n",sum);
    }
    return 0;
}