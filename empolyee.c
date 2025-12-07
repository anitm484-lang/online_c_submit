#include<stdio.h>
int main()  // here we use more percentage we can also replace it no problem occur
{
    float ts,bs,da,ta,hra;
    printf("enter your basic salary:");
    scanf("%f",&bs);

    if(bs<35000)
    {
        da = bs*0.03 ;
        ta = bs*0.02 ;
        hra= bs*0.04 ;
        ts = bs+da+ta-hra;
        printf("the basic salary :%.2f \n the DA is 3%%:%.2f \n The TA is2%%:%.2f \n the HRA is4%%:%.2f \n the totalsalary:%.2f",bs,da,ta,hra,ts);
    }
    else if (bs> 35000 && bs<90000)
     {
        da = bs*0.04  ;
        ta = bs*0.03 ;
        hra= bs*0.05 ;
        ts = bs+da+ta-hra;
        printf("the basic salary :%.2f \n the DA is 4%%:%.2f \n TheTA is 3%%:%.2f \n the HRA is 5%%:%.2f  \n the total salary:%.2f",bs,da,ta,hra,ts);
    }
    else {
        da = bs*0.05  ;
        ta = bs*0.04;
        hra= bs*0.07 ;
        ts = bs+da+ta-hra;
        printf("the basic salary :%.2f \n the DA is 5%%:%.2f \n The TA is4%%:%.2f \n the HRA is7%%:%.2f \n  the total salary:%.2f",bs,da,ta,hra,ts);
    }
    return 0;
}
