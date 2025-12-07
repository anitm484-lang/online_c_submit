#include<stdio.h>       // this  may be wrong.
#include<string.h>
#include<ctype.h>
int main()
{
	int l;
	char str[100];
	printf("enter the any string:");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	printf("the upper name is:%s",toupper(str));
	printf("the lower name is:%s",tolower(str));
	return 0;
}
