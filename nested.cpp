 # include<stdio.h>
    int main()             /*by using nested if ----it means that we can use more than one if in one program like example as follow:-*/
    {
    int a,b,c;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second  number:");
	scanf("%d",&b);
	printf("enter the third number:");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("the smallest number is a that is:%d",a);
		}
		else
		{
			printf("the smalllest number is  c that is: %d",c);
		}
		}
	else
	{
		if(b<c)
		{
			printf("the smallest number is b that is:%d",b);
		}
		else{
			printf("the smallest number is c that is:%d",c);
		}
		return 0;

	}
		
	}
