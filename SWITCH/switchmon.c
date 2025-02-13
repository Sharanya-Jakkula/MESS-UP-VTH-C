//TO DEMONSTRATE THE MONTH NAME BASED ON MONTH 
#include<stdio.h>
void main(){
	int mon;
	printf("-------------------------------------------------------------\n");
	printf("Follow the reference given below\n");
	printf("-------------------------------------------------------------\n");
	printf("\n");
	printf("Jan=1 ; Feb=2 ; Mar= 3 ; Apr=4; May=5 ; June=6 ;\n July =7 ; August=8; September=9 ; October=10 ; November=11 ; December=12 ");
	printf("\n");
	printf("\n");
		printf("-------------------------------------------------------------\n");
	printf("Enter the month number  :\n");
	scanf("%d",&mon);
	switch(mon)
	{
	case(1):
		printf("January\n");
			break;
	case(2):
		printf("February \n");
		break;
	case(3):
		printf("March \n");
		break;
	case(4):
		printf("April\n");
		break;
	case(5):
		printf("May\n");
		break;		
	case(6):
		printf("June\n");
		break;
	case(7):
		printf("July\n");
		break;
	case(8):
		printf("August\n");	
		break;
	case(9):
		printf("September \n");	
		break;
	case(10):
		printf("October\n");	
		break;
	case(11):
		printf("November \n");	
		break;
	case(12):
		printf("December\n");	
		break;
	default:
		printf("Enter the Month number correctly\n");
	}

		
	

}




