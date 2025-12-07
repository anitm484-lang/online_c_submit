#include<stdio.h>
int main()
{
    int i ,n;
    int num[100];
    int max,min;
    printf("enter how many numbmer you want:\n");
    scanf("%d",&n);
    printf("enter %d number:\n");
    for(i =0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
       max = min = num[0];
       for(i =0;i<n;i++)
       {
           if(max<num[i])
           max = num[i];
           else if(min>num[i])
           min=num[i];
       }
       printf("the max number is:%d\n",max);
       printf("the min number is:%d",min);
       return 0;
}
