// wap to find the number is armstrong or not using function.
#include<stdio.h>

int arm(int);

int main()
{
    int a, n;
    printf("enter the number :");
    scanf("%d", &n);

    a = arm(n);

    if(a == 1)
        printf("the number is armstrong number");
    else
        printf("the number is not armstrong number");

    return 0;
}

int arm(int n)
{
    int s = 0, r, n1;
    n1 = n;

    while(n > 0)
    {
        r = n % 10;          // correct
        s = s + (r*r*r);     // cube add
        n = n / 10;          // reduce n
    }

    if(n1 == s)
        return 1;
    else
        return 0;
}

