// wap to print even number between given average  and print the mid 
#include <stdio.h>

int main() {
int spoint, epoint,even;
printf("entet the spoint:");
scanf("%d",&spoint);
printf("enter the epoint:");
scanf("%d",&epoint);
while(spoint != epoint)
{
    even = spoint%2;
    if(even == 0)
    {
        printf("even number:%d \n",spoint);
    }
    spoint++;
}
    return 0;
}