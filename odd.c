//write a program to check even (single selection statements)
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%2 == 0)
    {
    printf("the number is even: %d",n);
    }
     else
      {
     printf("the number is odd: %d",n);
      }
return 0 ;
}