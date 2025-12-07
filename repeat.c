// /*program to input the element of 3x3 matrix and print them*/
#include<stdio.h>
int main()
{
    int r,c;
    int i,j;
    printf("enter the rows and columns:\n");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("enter the element of matrix:"); // hami le yasma print mathi gareko xau so jab aoutput ma janxa tab teha line by line aauxa not every line written with like "enter the element of matrix:".
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}