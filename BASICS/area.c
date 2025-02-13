//To calculate the area 
#include<stdio.h>
void main()
{
float l,b,r,arc,prc,arr,prr;
printf("Enter the length of the rectangle :\n");
scanf("%f",&l);
printf("Enter the breadth of the rectangle :\n");
scanf("%f",&b);
printf("Enter the radius of the circle :\n");
scanf("%f",&r);
arc=3.14*r*r;
prc=2*3.14*r;
arr=l*b;
prr=2*(l+b);
printf("The Area of the rectangle : %.2f \n",arr);
printf("The Perimeter of the rectangle : %.2f \n",prr);
printf("The Area of the circle : %.2f \n",arc);
printf("The Perimeter of the circle : %.2f \n",prc);
}
