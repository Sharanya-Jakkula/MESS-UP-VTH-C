//TO CALCULATE THE SUM OF THE FIRST AND THE LAST DIGIT 
#include<stdio.h>
void main()
{
    int x,z,first;
    printf("Enter any four digit-number :\n");
    scanf("%d",&x);
    first=x%10;  
    z=x/1000;
    printf("The sum of first and last digit is %d\n",first+z);
}
