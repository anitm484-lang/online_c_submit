#include <stdio.h>
#define MAXSIZE 100
int main() {
    int a[MAXSIZE];
    int i,size;
    int n,pos;
    printf("enter the  value of element ,you want to  insert:\n");
    scanf("%d",&size);
    printf("enter the %d element into array\n",size);
    printf("enter the element:\n");
    scanf("%d",&n);
    printf("enter the position:\n");
    scanf("%d",&pos);
    if(pos>size || pos<=0)
    {
        printf("invalid position:");
    }
    else
    for(i=size;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-i]=n;
    size++;
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
       
        
    }
  printf("The Array element are:");
 for(i=0;i<size;i++)
    {
       
        printf("%d\t",a[i]);
        
    }
    return 0;
}
