#include <stdio.h>
float add(float,int);
float sub(float,int);
int main()
{
float x;
// variable declaration.
int y;
float (*fp[2]) (float,int);
// function pointer declaration.
fp[0]=add;
// assigning addresses to the elements of an array of a function pointer.
fp[1]=sub;
printf("Enter the values of x and y :");
scanf("%f %d",&x,&y);
float r=(*fp[0]) (x,y);
// Calling add() function.
printf("\nSum of two values is : %.2f",r);
r=(*fp[1]) (x,y);
// Calling sub() function.
printf("\nDifference of two values is : %.2f\n",r);
// Calliung sub() function.
return 0;
}
float add(float x,int y)
{
float a=x+y;
return a;
}
float sub(float x,int y)
{
float a=x-y;
return a;
}