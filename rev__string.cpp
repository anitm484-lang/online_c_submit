#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    strrev(str);
    printf("the reverse of string is:%s",str);
    return 0;
}
