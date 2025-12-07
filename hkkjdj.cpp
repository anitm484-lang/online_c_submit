#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	printf("enter your name or anything:");
	fgets(name,sizeof(name),stdin);
	strlwr(name);
	printf("the name is in lower case:%s",name);
	strupr(name);
	printf("the name is in upper case:%s",name);
	return 0;
}
