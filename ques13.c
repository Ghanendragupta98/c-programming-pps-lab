#include<stdio.h>
int main()
{
    int number,i,factorial=1;
    
    printf("Enter a number: ");
    scanf("%d",&number);

    if (number==0)
    {
    printf("Factorial of  %d is %d",number,factorial);
    break;
    }
    
    for(i=1;i<=number;i++)
    {
        factorial=factorial*i;
    }
    
    printf("Factorial of  %d is %d",number,factorial);
    
    return 0;
    
}
