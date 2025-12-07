   //wap to find the  area and perimeter of reachatangle.
   #include<stdio.h>
int react(int,int);
int peri(int,int);
int main()
{
	int a,l,b,c;
	printf("enter the length and breadth :");
	scanf("%d%d",&l,&b);
	a = react(l,b);
	c = peri(l,b);
	printf("the area of reactangle is:%d\n",a);
	printf("the perimeter of circle is%d:",c);
	return 0;
}
int react(int l,int b)
{
	int s;
	s = l*b;
	return (s);
}
int peri(int l,int b)
{
	int p;
	p = 2*(l+b);
	return (p);
}
