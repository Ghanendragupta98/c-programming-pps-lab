#include <stdio.h>

int main()
{
   char type;
   printf("which type of number you want to enter(b for binary and d for deciaml): ");
   scanf("%c",&type);
   
   if(type=='b')
   {
       int binary ;
       int last_digit,weight=1,decimal=0;
       printf("Enter number in binary form: ");
       scanf("%d",&binary);
       
       while(binary>0)
       { 
         last_digit=binary%10;
         decimal=decimal+(last_digit*weight);
         weight=weight*2;
         binary=binary/10;
       }
       
       printf("The decimal number corresponding to the entered binary number is %d",decimal);
       return 0;
   }  
   
   else if (type=='d')
   {
       int number;
       printf("Enter number: ");
       scanf("%d",&number);

       if(number==0)
       {
        printf("The entered number in binary form: 0");
        return 0;
       }
       
       int b[number];
       int rem,i=0;
       
       while(number>0)
       {
           rem=number%2;
           number=number/2;
           b[i]=rem;
           i++;
       }
       
       printf("The entered number in binary form: ");
       for(int j=i-1;j>=0;j--)
       {
           printf("%d",b[j]);
       }
       return 0;
   }
   
   else
   {
       printf("The type entered is invalid");
   }
   
    return 0;
}