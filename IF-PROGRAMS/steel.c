//to calculate the grade of steel
#include <stdio.h>  
void main(){
	int h,t;
	float cc;
	printf("Enter the hardness,carbon content and tensile strength of the steel respectively :\n");
	scanf("%d %f %d",&h,&cc,&t);
	if((h>50)&&(cc<0.7)&&(t>5600))
		printf("The grade of the steel is 10\n");
	else if((h>50)&&(cc<0.7))
		printf("The grade of the steel is 9\n");
	else if((t>5600)&&(cc<0.7))
		printf("The grade of the steel is 8\n");
	else if((t>5600)&&(h>50))
		printf("The grade of the steel is 7\n");
	else if((h>50)||(cc<0.7)||(t>5600))
		printf("The grade of the steel is 6\n");
	else
		printf("The grade of the steel is 5\n");

}
