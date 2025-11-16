#include <stdio.h>
int main()
{
    int length,i;
    printf("Enter number of elements :");
    scanf("%d",&length);

    int nums[length];

    for(i=0;i<length;i++)
    {
        printf("Enter element at index %d:  ",i);
      scanf("%d",&nums[i]);
    }

    int max ,min;

    max=nums[0],min=nums[0];

    for(i=1;i<length;i++)
    {
        if (max<nums[i])
        {
            max=nums[i];
        }

        if (min>nums[i])
        {
            min=nums[i];
        }
    }

    printf("Maximum = %d\nMinimum = %d",max,min);

    return 0;
       
}