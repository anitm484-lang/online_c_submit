#include<stdio.h>
int main()
{
	int a,b;
	int sum;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	sum = a*a + b*b;
	printf("the sum of their square is:%d",sum);
	return 0;
}
