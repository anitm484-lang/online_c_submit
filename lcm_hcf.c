// wap to find the lcm and gcd(hcf) of the input number.
#include<stdio.h>
int main()
{
    int a,b;
    int x,y,r,gcd,lcm;
    printf("enter the number:");
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    while(y !=0)
    {
    r=x%y;
    x=y;
    y=r;
    }
    gcd=x;
    lcm = (a*b)/gcd;
    printf("the  gcd is:%d \n",gcd);
    printf("the lcm is:%d",lcm);
    return 0;
    
}
