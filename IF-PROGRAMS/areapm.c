#include<stdio.h>
void main()
{
    int l,b,area,pm;
    printf("Enter the length and breadth of a rectangle :");
    scanf("%d %d",&l,&b);
    area=l*b;
    pm=2*(l+b);
    if(area>pm)
        printf("The area of a rectangle with the length %d and  breadth %d is greater than its perimeter\n ",l,b);
    else
        printf("The area of a rectangle with the length %d and  breadth %d is less than its perimeter\n ",l,b);

}