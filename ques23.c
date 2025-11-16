# include <stdio.h>
int main()
{
    int length,i;
    printf("Enter lenght:");
    scanf("%d",&length);

    int firstnums[length], secondnums[length],thirdnums[length];

    for(i=0;i<length;i++)
    {
        printf("Enter element at index %d: ",i);
        scanf("%d",&firstnums[i]);
    }

    printf("Enter the element in second array\n");

    for(i=0;i<length;i++)
    {
        printf("Enter element at index %d: ",i);
        scanf("%d",&secondnums[i]);
    }

    for(i=0;i<length;i++)
    {
        thirdnums[i]=firstnums[i]+secondnums[i];
    }

    printf("The third array is \n");

    for(i=0;i<length;i++)
    {
        printf("%d\t",thirdnums[i]);
    }

   return 0 ; 
}
