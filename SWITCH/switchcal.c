//TO MAKE A MINICALCULATOR FOR SWITCH 
#include<stdio.h>
void main(){
	int a,b;
	char opr;
	printf("Enter the first number :\n");
	scanf("%d",&a);
	printf("Enter the second number :\n");
	scanf("%d",&b);
	printf("Enter the operator you want to perform :\n");
	scanf("\n%c",&opr);
	printf("-------------------------------------------------------------\n");
	switch(opr)
	{
	case('+'):
		printf("SUM = %d\n",a+b);
			break;
	case('-'):
		printf("DIFFERENCE = %d\n",a-b);
		break;
	case('*'):
		printf("Multiplication = %d \n",a*b);
		break;
	case('/'):
		printf("Quotient = %d\n",a/b);
		break;
	case('%'):
		printf("Modulus =  %d\n",a%b);
		break;		
	default:
		printf("Enter the operator correctly\n");
	}
}
