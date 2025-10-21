#include<stdio.h>
int main()
{
    int number,sumofdigit=0;
    
    printf("Enter a number: ");
    scanf("%d",&number);
   
   while (number>0)
   {
       sumofdigit=sumofdigit+(number%10);
       number=number/10;
   }
   
   printf("The sum of digits of entered number is %d",sumofdigit);
   
   return 0;
   
}
