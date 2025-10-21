#include <stdio.h>

int main()
{
    int marks1,marks2,marks3,marks4,marks5,sum,percent;

    printf("Enter marks of Physics: ");
    scanf("%d",&marks1);

    printf("Enter marks of PPS: ");
    scanf("%d",&marks2);

    printf("Enter marks of maths: ");
    scanf("%d",&marks3);

    printf("Enter marks of EVS: ");
    scanf("%d",&marks4);

    printf("Enter marks of EE: ");
    scanf("%d",&marks5);

    sum=marks1+marks2+marks3+marks4+marks5;
    percent=(sum/5);

    printf("percentage: %d\n",percent);
    
    if(percent<100&&percent>=90)
    printf("Grade A");
    else if(percent<90&&percent>=80)
    printf("Grade B");
    else if(percent<80&&percent>=60)
    printf("Grade C");
    else
    printf("Grade D");
    
    return 0;
}
