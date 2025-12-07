
#include<stdio.h>
int main()
{
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	if(year%400 == 0|| (year%100 != 0 && year%4 == 0))
	{
		printf("given year is leap year!");
	}
	else 
	{
		printf("givem year is not leap year");
	}
	return 0 ;
}
