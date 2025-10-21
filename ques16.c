#include<stdio.h>
int main()
{
    int number,i,count=0;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    if (number==0||number==1)
    {
    printf("%d is not prime",number);
    return 0;
    }
    
    
    for(i=2;i<=(number/2);i++)
    {
        if(number%i==0)
        {
            count=1;
            break;
        }
    }
    
   if (count==0)
   printf("%d is prime number",number);
   else
   printf("%d is not prime",number);
    
    return 0;
    
}
