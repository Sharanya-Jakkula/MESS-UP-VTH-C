//TO FIND THE TYPE OF A TRIANGLE BASED ON SIDES
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the sides of the triangle respectively :\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&&b==c&&c==a)
		printf("The triangle is equilateral ");
	else if(a==b||b==c||c==a)
		printf("The triangle is isosceles ");
	else
		printf("The triangle is scalene ");
		
}
