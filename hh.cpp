#include<stdio.h>
#include<string.h>
int main()
{
	int i,count =0;
	char arr[100];
	printf("enter any array:");
	fgets(arr,sizeof(arr),stdin);
	for(i=0;arr[i] !='\0';i++)
	{
		count ++;
	}
	printf("the size of string:%d",count-1);
	return 0;
}
