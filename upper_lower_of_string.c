#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	printf("enter the string:");
	fgets(str1,sizeof(str1),stdin);
	str1[strcspn(str1,"\n")]='\0';
	strlwr(str1);
	printf("the lower case of string is:%s\n",str1);
	strupr(str1);
	printf("the upper case of string is:%s",str1);
	return 0;
}
