 // wap to find the faactorial by decrement of for loop
 #include<stdio.h>
int main()
{
    int i,n;
    int fact =1;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact = fact*i;
    }
    printf("the factorial of the %d number is:%d",n,fact);
    return 0;
}
