#include<stdio.h>
int main()
{
    int i,n;
    float sum =0;
    float sal[100];
    float avg;
    printf("enter the number of employee which you want to do:\n");
    scanf("%d",&n);
    printf("enter the salary of emp:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%f",&sal[i]);
    }
    for(i=1;i<=n;i++)
    {
        sum = sum+sal[i];
    }
    avg = sum /n;
    printf(" the sum of sal:%f\n",sum);
    printf("the average is:%f",avg);
    return 0;
}