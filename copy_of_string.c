// wap to copy the string 
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[200];
	printf("enter the first string:");
	fgets(str1,sizeof(str1),stdin); // this line for the remove new line from the string 
	str1[strcspn(str1,"\n")]='\0';  
	strcpy(str2,str1);
	printf("the copied string is:%s",str2);
	printf("the length of copied string is:%s",strlen(str2));
	return 0;
}
