//TO WORK WITH CONDITIONAL OPERATORS
#include<stdio.h>
void main(){
	//to check the entered character lower case
	char a,b;
	printf("_____________________________________________________\n");
	printf("\n");
	printf("Enter the character :");
	scanf("%c",&a);
	(a>=97&&a<=122)?printf("Lower case character\n"):printf("NOT A LOWER CASE ALPHABET \n");
	
	printf("_____________________________________________________\n");
	
	//to check the entered character special character
	printf("\n");
	printf("Enter the character : ");
	scanf("\n%c",&b);
	((b>=0&&b<=47)||(b>=58&&b<=64)||(b>=91&&b<=96)||(b>=123&&b<=127))?printf("IT IS A SPECIAL CHARACTER\n"):printf("IT IS NOT A SPECIAL CHARACTER\n");

	//TO take input second time for character place \n before format specifier
	printf("_____________________________________________________\n");
	//TO CHECK FOR A LEAP YEAR
	printf("\n");
	int yr;
	printf("Enter the year : ");
	scanf("%d",&yr);
	((yr%4==0&&yr%100==0)||(yr%100==0&&yr%400==0))?printf("It is a leap year\n"):printf("Not a leap year\n");
	printf("_____________________________________________________\n");
		
	//TO PRINT THE GREATEST OF THE THREE  NUMBERS 
	printf("\n");
	int x,y,z,max;
	printf("Enter the numbers a,b and c respectively :");
	scanf("%d %d %d",&x,&y,&z);
	max=x;
	max=(x>y?x:y);
	max=(y>z?y:z);
	max=(z>x?z:x);
	printf("The maximum number is %d\n ",max);
	printf("_____________________________________________________\n");
}
