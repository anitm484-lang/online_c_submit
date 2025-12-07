// wap to  take as input from user then find the sum of positive and negative number.
#include<stdio.h>
int main()
{
    int i,no;
    int n;
    int pos = 0,neg =0; 
    printf("how many number you want(no):\n");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        printf("enter the  number:");
        scanf("%d",&n);
        if(n>0)
        pos = pos+n;   //  yup we can also write pos +=n;
        else
        neg  +=n;
    }
    printf("the sum of the positive number is:%d\n",pos);
    printf("the sum of the negative number is:%d\n",neg);
    return 0;
}