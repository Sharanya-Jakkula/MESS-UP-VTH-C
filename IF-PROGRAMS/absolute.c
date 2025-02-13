//TO FIND THE ABSOLUTE OF A NUMBER 
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    if(a<0)
        printf("The absolute value of the given number is %d\n",-1*a);
    else
        printf("The absolute value of the given number is %d\n",a);

}
