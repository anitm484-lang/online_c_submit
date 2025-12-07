#include<stdio.h>
int main()
{
    int r,n,o, s =0;
    printf("enter the number:");
    scanf("%d",&n);
    o = n;
    while(n!= 0)
    {
        r = n%10;
        s = r+ (s*10);
        n = n/10;
    }
    if(o==s)
    {
        printf("the enter is palindrome  %d",s);
    }
    else{
        printf("the enter is not palindrome %d",s);
    }
    return 0;
}