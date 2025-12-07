// wap  to multiply scalar value with any matrix that enter by the user.
//  (i can say proudly i do this by myself with my confidence)
#include<stdio.h>
int main()
{
    int i,j;
    int rows,columns;
    printf("enter the rows and columns:");
    scanf("%d%d",&rows,&columns);
    int a[rows][columns];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("enter the elements of A:");
            scanf("%d",&a[i][j]);
        }
    }
    
    int c[rows][columns];
      for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
             c[i][j]=2*a[i][j];
             printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}