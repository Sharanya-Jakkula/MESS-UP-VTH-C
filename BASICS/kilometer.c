//TO CONVERT KILOMETERS INTO OTHER FORMS
#include<stdio.h>
void main()
{
    float kilometer,meter,centimeter,feet,inch;
    printf("Enter the distance between two cities :\n");
    scanf("%f",&kilometer);
    meter=kilometer*1000;
    centimeter=meter*100;
    feet=centimeter/30.48;
    inch=feet*12;
    printf("Distance in meter=%.2f\n",meter);
    printf("Distance in centimeter=%.2f\n",centimeter);
    printf("Distance in feets=%.2f\n",feet);
    printf("Distance in inches=%.2f\n",inch);



}