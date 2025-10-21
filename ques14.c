#include<stdio.h>
int main()
{
    int number,i,sumofeven=0,sumofodd=0;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    for(i=1;i<=number;i++)
    {
        if(i%2==0)
        sumofeven=sumofeven+i;
        else
        sumofodd=sumofodd+i;
    }
    printf("sum of even numbers= %d",sumofeven);
    printf("sum of odd numbers= %d",sumofodd);
    
    return 0;
    
}
