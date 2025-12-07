#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	int small=0,cap=0;
	char str[100];
	printf("enter the words:");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i] !='\0',i++)
	{
		if(str>='65'&& '96'<=str)
		cap++;
		else if(str>='97')
		small++;
	}
	printf("the upper case:%s",cap);
	printf("the lower case:%s",small);
}
