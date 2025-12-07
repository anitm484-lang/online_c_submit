// write a program to swipe the value of two  number taking from user

#include<stdio.h>
int main()
{
	int a,b,swap;
	printf("enter the number:");
	scanf("%d%d",&a,&b);
	swap=a;
	a=b;
	b=swap;
	printf("the swap of a is %d \n the swap of b is %d",a,b);
	return 0;
}
