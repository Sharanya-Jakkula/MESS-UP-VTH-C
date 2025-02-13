#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the three sides of triangles :\n");
	scanf("%d %d %d",&a,&b,&c);
	if((a!=b)&&(b!=c)&&(c!=a))
		printf("It is a scalene triangle \n");
	else if (a==b||b==c||c==a)
		printf("It is isosceles triangle\n");
	else
		printf("It is an equilateral triangle \n");
}
