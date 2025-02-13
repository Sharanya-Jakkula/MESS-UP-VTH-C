//TO PRINT THE MONTH NAME BASED ON MONTH DAYS 
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
		printf("No.of Days = 31\n");
		break;
	case(2):
		printf("February \n");
		printf("No.of Days = 28\n");
		break;
	case(3):
		printf("March \n");
		printf("No.of Days = 31\n");
		break;
	case(4):
		printf("April\n");
		printf("No.of Days = 30\n");
		break;
	case(5):
		printf("May\n");
		printf("No.of Days = 31\n");
		break;		
	case(6):
		printf("June\n");
		printf("No.of Days = 30\n");
		break;
	case(7):
		printf("July\n");
		printf("No.of Days = 31\n");
		break;
	case(8):
		printf("August\n");
		printf("No.of Days = 31\n");
		break;
	case(9):
		printf("September \n");	
		printf("No.of Days = 30\n");
		break;
	case(10):
		printf("October\n");
		printf("No.of Days = 31\n");	
		break;
	case(11):
		printf("November \n");
		printf("No.of Days = 30\n");
		break;
	case(12):
		printf("December\n");
		printf("No.of Days = 31\n");
		break;
	default:
		printf("Enter the Month number correctly\n");
		printf("Hello");
	}

		
	

}




