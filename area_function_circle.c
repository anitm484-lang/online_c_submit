//wap to find the area and perimeter of circle using function.
#include<stdio.h>
int area(int);
int peri(int);
int main()
{
	int r,a,b;
	printf("enter the radius:");
	scanf("%d",&r);
	a = area(r);
	b = peri(r);
	printf("the area of circle is:%d\n",a);
	printf("the perimeter of circle is:%d\n",b);
	return 0;
}
int area(int r)
{
	int x;
	x=3.14*r*r;
	return (x);
}
int peri(int r)
{
	int y;
	y=2*3.14*r;
	return (y);
}
