//TO CALCULATE THE BODY MASS INDEX
#include<stdio.h>
void main(){
	float b,h,w;
	printf("Enter the body weight and height respectively :\n");
	scanf("%f %f",&w,&h);
	b=w/(h*h);
	printf("YOUR BMI IS %.2f\n",b);
	if(b<15)
		printf("Starvation\n");
	else if(b>=15.1&&b<=17.5)
		printf("Anoxeric\n");
	else if(b>=17.6&&b<=18.5)
		printf("Underweight \n");
	else if(b>=18.6&&b<=24.9)
		printf("Ideal\n");
	else if(b>=25&&b<=25.9)
		printf("Over weight \n");
	else if(b>=30&&b<=30.9)
		printf("Obese\n");
	else if(b>=40)
		printf("Morbidly obese \n");
	else
		printf("Please enter the weight and height correctly\n");
} 
