#include<stdio.h>
int main()
{
    int operand1,operand2;
    char operator;
    
    printf("Enter an operator:");
    scanf("%c",&operator);
    
    printf("Enter two operands: ");
    scanf("%d%d",&operand1,&operand2);
    
    switch(operator)
    {
    
    case'+':
    printf("Addition of %d and %d is %d",operand1,operand2,operand1+operand2);
    break;
    
    case'-':
    printf("Substraction of %d and %d is %d",operand1,operand2,operand1-operand2);
    break;
    
    case'*':
    printf("Multiplication of %d and %d is %d",operand1,operand2,operand1*operand2);
    break;
    
    case'/':
    printf("Division of %d and %d is %d",operand1,operand2,operand1/operand2);
    break;
    
    default:
    printf("The entered operator is invalid ");
    }
    
    return 0 ;
}
