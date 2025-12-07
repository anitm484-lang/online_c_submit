//wap to find the concatination(joining of two string) without using fgets
#include<stdio.h>
#include<string.h>
int main()
{
    
    char str1[500],str2[500];
    printf("enter the first words: ");
   scanf("%s",str1);
   printf("enter the second words:");
   scanf("%s",str2);
   strcat(str1,str2);
    printf("join of string is:%s\n",str1);
    printf("the length of string is:%d",strlen(str1));
    return 0;
}
