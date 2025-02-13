#include<stdio.h>
void main()
{
float temp,celsius;
printf("Enter the temperature in farenheit :\n");
scanf("%f",&temp);
celsius=5*(temp-32)/9;
printf("the temperature in celsius : %.2f\n",celsius);
/*TEMPERATURE FROM CELSIUS TO FARENHEIT=[(9*celsius)/5+32]*/
}