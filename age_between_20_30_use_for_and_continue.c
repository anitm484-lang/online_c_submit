#include<stdio.h>
int main()
{
    int i,n;
    int num[100];
    int count = 0;
    printf("enter the number of array which you need:");
    scanf("%d",&n);
    printf("enter the age:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]>20 && num[i]<40)
        {
            count +=1; // we can also use count = count +1;
            continue;
        }
    }
    printf("the person with age between 20 to 40 is:%d",count);
    return 0;

}