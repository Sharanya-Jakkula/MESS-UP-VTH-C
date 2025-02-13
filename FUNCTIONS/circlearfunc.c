//TO PRINT THE AREA OF CIRCLE 
#include <stdio.h>
#define pi 3.14
void arcircle(float n);
void main(){
    float r;
    printf("Enter the radius of the circle :\n");
    scanf("%f",&r);
    arcircle(r);


}
void arcircle(float r)
{
//float r;
printf("The area of circle is :%.2f\n",pi*r*r);

}