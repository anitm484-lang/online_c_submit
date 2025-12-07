#include<stdio.h>
#include<string.h>
int main()
{
	int l;
	char str[100];
	printf("enter the any string:");
	fgets(str,sizeof(str),stdin);
	l=strlen(str);
	printf("the length of string is:%d",l);
	return 0;
}
