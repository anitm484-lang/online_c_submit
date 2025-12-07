#include<stdio.h>
#include<math.h>
int main()
{
	int r;
	int area,perimeter;
	printf("enter the radious:\n");
	scanf("%d",&r);
	area = 3.14*r*r;
	perimeter = 2*3.14*r;
	printf("area circle:%d\n",area);
	printf("perimeter of circle:%d\n",perimeter);	
	return 0;
}
