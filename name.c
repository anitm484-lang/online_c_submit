#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	printf("enter any array:");
	fgets(arr,sizeof(arr),stdin);
	printf("your name is:%s",arr);
	return 0;
}
