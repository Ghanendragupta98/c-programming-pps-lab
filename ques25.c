# include <stdio.h>
int main()
{
    int length,i,key,loc=-1;
    printf("Enter lenght:");
    scanf("%d",&length);
    int nums[length];

    for( i=0;i<length;i++)
    {
        printf("enter element at %d: ",i);
        scanf("%d",&nums[i]);
    }

    printf("Enter the searching number: ");
    scanf("%d",&key);

    for(i=0;i<length;i++)
    {
        if(key==nums[i])
        {
            printf("The %d number is at %d index \n",key,i);
            loc=0;
        }
    }

    if (loc==-1)
    printf("The number is not in the array");
    
    return 0;
}