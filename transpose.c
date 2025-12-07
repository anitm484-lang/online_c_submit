//wap to perform the matrix and after that you perform their transpose matrix
#include<stdio.h>
int main()
{
    int i,j;
    int rows,columns;
    printf("enter the rows and columns:\n");
    scanf("%d%d",&rows,&columns);
    int a[rows][columns];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("enter the elements :");
            scanf("%d",&a[i][j]);
        }
    } 
    printf("\nbefore transpose matrix:\n");
   
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d",a[i][j]);
           
        }
        printf("\n");
    }
     printf("\nafter transpose matrix:\n");
   
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d",a[j][i]);
           
        }
        printf("\n");
    }
    
    
    return 0;
    
}