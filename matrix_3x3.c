// wap to initialization of array as 3x3 matrix
#include<stdio.h>
int main()
{
    int array[3][3];
    int i,j;
    printf("enter the 9 element of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the element:");
            scanf("%d",&array[i][j]);
        }
    }
    // to print
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}