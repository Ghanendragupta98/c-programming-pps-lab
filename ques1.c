#include <stdio.h>

int main()
{
    int marks1,marks2,marks3,marks4,marks5,sum,percent;

    printf("Enter marks of Physics: ");
    scanf("%d",&marks1);

    printf("Enter marks of PPS: ");
    scanf("%d",&marks2);

    printf("Enter marks of mathemathics: ");
    scanf("%d",&marks3);

    printf("Enter marks of EVS: ");
    scanf("%d",&marks4);

    printf("Enter marks of EE: ");
    scanf("%d",&marks5);

    sum=marks1+marks2+marks3+marks4+marks5;
    percent=(sum/5);

    printf("sum: %d\n",sum);
    printf("percentage: %d",percent);
    
    return 0;

}
