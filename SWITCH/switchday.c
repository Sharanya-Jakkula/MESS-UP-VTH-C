//DAY OF THE WEEK USING SWITCH
//TO MAKE A MINICALCULATOR FOR SWITCH 
#include<stdio.h>
void main(){
	int a;
	printf("Enter the day number (1-7):\n");
	scanf("%d",&a);
	printf("-------------------------------------------------------------\n");
	switch(a)
	{
	case(1):
		printf("SUNDAY\n");
		break;
	case(2):
		printf("MONDAY\n");
		break;
	case(3):
		printf("TUESDAY\n");
		break;
	case(4):
		printf("WEDNESDAY\n");
		break;
	case(5):
		printf("THURSDAY\n");
		break;	
	case(6):
		printf("FRIDAY\n");
		break;	
	case(7):
		printf("SATURDAY\n");
		break;		
	default:
		printf("Enter the number correctly\n");

	}
}
