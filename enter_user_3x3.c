//wap to enter from user which matrix you want and then print them.
#include<stdio.h>
int main()
{
   
    int rows,columns;
    int i,j;
    printf("enter the number of rows and columns that you want:\n");
    scanf("%d%d",&rows,&columns);
     int a[rows][columns];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("enter the elements:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}