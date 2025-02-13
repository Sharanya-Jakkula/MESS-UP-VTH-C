//TO CALCULATE THE SUM OF THE DIGITS IN A FIVE DIGIT NUMBER 
#include<stdio.h>
void main()
{
    int x,z,dig;
    printf("Enter any FIVE digit-number :\n");
    scanf("%d",&x);
   //one
    z=x%10;  
    dig=0+z;
    //two
    x=x/10;
    z=x%10;  
    dig=dig+z;
    //three
    x=x/10;
    z=x%10;  
    dig=dig+z;
    //four
    x=x/10;
    z=x%10;  
    dig=dig+z;
    //five
    z=x/10;
    dig=dig+z;
    printf("The sum of the digits is %d\n",dig);
}
