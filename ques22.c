# include <stdio.h>
int main()
{
    int length,i;
    printf("Enter lenght:");
    scanf("%d",&length);
    int nums[length];

    for( i=0;i<length;i++)
    {
        printf("enter element at %d: ",i);
        scanf("%d",&nums[i]);
    }
    int sum=0;

    for(i=0;i<length;i++)
    {
        sum=sum+nums[i];
    }

    printf("Sum of elements=%d",sum);
    
    return 0;
}