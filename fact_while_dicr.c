// wap to find the factorial  by using while by decrement
#include<stdio.h>
int main()
{
	int n;
	int fact =1;
	printf("enter the number:");
	scanf("%d",&n);
	if(n==0)
	printf("the factorial of number  zero is:1");
	else
	{
		int i=n;
		while(i>=1)
		{
			fact = fact*i;
			i--;
		}
		printf("the factorial of the %d number is:%d",n,fact);
	}
}
