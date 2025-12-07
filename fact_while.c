// wap to find the factorial using while loop 
#include<stdio.h>
int main()
{
	int i=1,n,fact =1;
	printf("enter the number:");
	scanf("%d",&n);
	if(n==0)
	printf("the factorial of the zero is:1");
	else
	{
		while(i<=n)
		{
			fact *=i;
			i++;
		}
		printf("the factorial of the %d number:%d",n,fact);
	}
	return 0;
}
