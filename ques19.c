#include <stdio.h>
#include <math.h>

int main()
{
   printf("Armstrong numbers are\n");
   for( int i=1;i<=100;i++)
   {
       int number,count=0,temp1,temp2,temp3=0;
       number=i;
       temp1=number;
   
   while (number>0)
   {
       count++;
       number=number/10;
       
   }
   
   number=temp1;
   
   while (number>0)
   {
       temp2=number%10;
       temp3=temp3+pow(temp2,count);
       number=number/10;
       
   }
   
   number=temp1;
   if (temp3==number)
   printf("%d \n",number);
   
   }
   
   return 0;
       
}
