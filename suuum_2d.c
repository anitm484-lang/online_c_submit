#include<stdio.h>
int main()
{
    int r,c;
    int i,j;
    printf("enter the rows and columns:\n");
    scanf("%d%d",&r,&c);
    int A[r][c],B[r][c],C[r][c];
    printf("enter the element of matrix A is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter teh element of matrix B is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("The sum of matrix A and B is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            C[i][j] =A[i][j]+B[i][j];
            printf("%d",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}