#include<stdio.h>
int main(){
    int i;
    float avg;
    float sal[40];
    float sum = 0;
    printf("enter tha salary of emp:\n");
    for(i=0;i<=10;i++)
    {
        scanf("%f",&sal[i]);
    }
    for(i=0;i<=10;i++)
    {
        sum = sum+sal[i];
    }
    avg = sum/11;
    
    printf("sum = %f \n",sum);
    printf("average salary is:%f",avg);
}
