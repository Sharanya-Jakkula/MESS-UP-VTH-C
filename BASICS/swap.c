//TO RUN A C PROGRAM FOR SWAPPING TWO NUMBERS
#include<stdio.h>
void main(){
	int a,b;
	printf("Enter the number : \n ");
	scanf("%d",&a);
	printf("Enter the number : \n ");
	scanf("%d",&b);
	printf(" Before swapping the numbers are %d %d\n ",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping the numbers are %d %d \n",a,b);
}
