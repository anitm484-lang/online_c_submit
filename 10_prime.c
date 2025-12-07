// wap to print first 10 prime numbers in easy way
#include<stdio.h>
int main()
{
    int n=2, count=0, i, flag;

    while(count < 10)
    {
        flag = 0;
        for(i=2; i<n; i++)
        {
            if(n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("%d ", n);
            count++;
        }

        n++;
    }

    return 0;
}

