#include<stdio.h>
int main()
{
    int i,n;
    int even = 0, odd = 0;
    int array[100];
    printf("enter how many number you want:\n");
    scanf("%d",&n);
    printf("enter the %d number:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("the total even number is:%d \n",even);
    printf("the total odd number is:%d",odd);
    return 0;
}
