#include <stdio.h>
#include<math.h>

int main()
{
    float principal,rateofinterest,time,si,ci;
     

    printf("Enter principal amount: ");
    scanf("%f",&principal);

    printf("Enter rate of interest: ");
    scanf("%f",&rateofinterest);

    printf("Enter time : ");
    scanf("%f",&time);

    si=(principal*rateofinterest*time)/100;
    
    ci=principal*pow((1+(rateofinterest/100)),time)-principal;

    printf("simple interset : %f\n",si);
    printf("compound interset: %f",ci);
    
    return 0;
    
}