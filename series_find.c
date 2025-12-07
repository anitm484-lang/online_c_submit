 // wap to find the given seris
 // 0   1   1   2   3   5   8   13...........upto nth terms. (not using gptchat it myself)
 #include<stdio.h>
int main()
{
    int i,n;
    int a =0,b =1,c;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d \t",a);
        c = a+b;
        a = b;
        b=c;
    }
    return 0;
}