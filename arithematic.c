// write a program to find the all arithemetic mean in  one program in c
# include <stdio.h>
int main()
{
    int a,b;
    int sum, difference,multiply,divide,expen,module;
    printf("enter the number \n:");
    scanf("%d%d",&a,&b);
    sum = a+b;
    difference = a-b;
    multiply = a*b;
    divide = a/b;
   
    module = a%b;
    printf("the sum of a  and  b is %d\n",sum);
    printf("difference of a and b = %d \n",difference);
    printf("multiply of a and b =%d \n",multiply);
    printf("divide  of a and b is = %d \n",divide);
    
    printf(" module of aand b is =%d",module);
    return 0;
}