//TO FIND THE VALIDITY OF A TRIANGLE BASED ON SIDES
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the sides of the triangle respectively :\n");
	scanf("%d %d %d",&a,&b,&c);
	if((a+b>c)||(a+c>b)||(c+b>a))
		printf("The triangle is valid ");
	else 
		printf("The triangle is not valid ");
}
