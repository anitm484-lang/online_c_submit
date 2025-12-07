#include<stdio.h>
int main()
{
    int i,n;
    int large,small;
    int num[100];
    printf("enter the number that how many do you want:\n");
    scanf("%d",&n);
    printf("enter number:\t");
        for(i =0;i<n;i++)
        {
            scanf("%d",&num[i]);
        }
    small = large = num[0];
    for(i =0;i<n;i++)
    {
        if(large<num[i])
        large = num[i];
        else if(small>num[i])
        small = num[i];
    }
    printf("the largest number is:%d\n",large);
    printf("the smallest nubmer is:%d",small);
    return 0;
}