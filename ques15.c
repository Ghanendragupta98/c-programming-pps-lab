#include <stdio.h>

int main()
{
    int n,i,temp1=0,temp2=1,nextterm;

    printf("Enter the number of terms : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\t",temp1);
        nextterm=temp1+temp2;
        temp1=temp2;
        temp2=nextterm;

    }

    return 0;

}