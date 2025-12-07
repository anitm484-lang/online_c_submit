//wap to find the length of string.
#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char words[100];
    printf("enter the words or sentences:");
    fgets(words,sizeof(words),stdin); // here also if we use this then only give it with words not with space  but if we use fgets(words,75,stdin) then it give space count also
    l=strlen(words);
    printf("the length of string is:%d",l);
    return 0;
}
