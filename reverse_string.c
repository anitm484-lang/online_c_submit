// wap to reverse the string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	printf("enter the string:");
	fgets(str1,sizeof(str1),stdin);
	str1[strcspn(str1,"\n")]='\0';    // this line for the remove new line from the string 
	strrev(str1);
	printf("the reverse string is:%s",str1);
	return 0;
	
	
}
