//wap to find the concatination(joining of two string) with fgets.
#include<stdio.h>
#include<string.h>
int main()
{
    
    char str1[500],str2[500];
    printf("enter the first words: ");
  fgets(str1,sizeof(str1),stdin);
   printf("enter the second words:");
   fgets(str2,sizeof(str2),stdin);		 
  str1[strcspn(str1,"\n")]='\0';  		// this line for the remove new line from the string 
  str2[strcspn(str2,"\n")]='\0';
   strcat(str1,str2);
    printf("join of string is:%s\n",str1);
    printf("the length of string is:%d",strlen(str1));
    return 0;
}
