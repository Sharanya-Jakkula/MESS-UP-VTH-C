
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year :\n");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)||(year%100==0 && year%400==0))
        printf("This is Leap Year\n");
    else
       printf("This is not a leap year \n");
}
//---------------------------------------
