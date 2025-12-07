 // wap to find the sum of positive and negative number using array
 #include<stdio.h>
int main()
{
    int i,size;
    int num[100];
    int pos=0,neg =0;
    printf("how many number  or how much size you want:\n");
    scanf("%d",&size);
    printf("enter %d number:\n");
    for(i =0;i<size;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<size;i++)
    {
        if(num[i]>0)
        pos +=num[i];
        else
        neg +=num[i];
    }
    printf("the sum of the positive number is:%d \n",pos);
    printf("the sum of the negative number is:%d",neg);
    return 0;
}