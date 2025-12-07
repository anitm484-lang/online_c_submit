// wap to find the reverse of the number using function.
// yup no attitude but i do this all function problem by myself. yup thanks god.

#include<stdio.h>
int rev(int);
int main()
{ 
int n,r;
printf("enter the number:");
scanf("%d",&n);
r = rev(n);
printf("the sum of the digits  of the number is:%d",r);
}
int rev(int n)
{
	int  s =0;
	int a;
	while(n>0)
	{
		a = n%10;
		s = s+a;
		n=n/10;
	}
	return (s);
}
