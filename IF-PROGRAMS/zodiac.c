//TO PRINT THE ZODIAC SIGN
#include<stdio.h>
void main(){
	int d;
	char m;
	printf("jan-j,feb-f,mar-r,apr-a,may-y,june-e,july-l,aug-g,sept-s,oct-o,nov-n,dec-c\n");
	printf("Enter the month of born :\n");
	scanf("%c",&m);
	printf("Enter the date of your birth :\n");
	scanf("%d",&d);
	if(d<=31&&d>=1)
		{
			if((m=='c'&&d>=22)||(m=='j'&&d<=19))
				printf("CAPRICORN \n");
				
			else if((m=='j'&&d>=20)||(m=='f'&&d<=17))
				printf("AQUARIUS \n");
				
			else if((m=='f'&&d>=18)||(m=='r'&&d<=19))
				printf("PISCES \n");
				
			else if((m=='r'&&d>=20)||(m=='a'&&d<=19))
				printf("ARIES \n");
				
			else if((m=='a'&&d>=20)||(m=='y'&&d<=20))
				printf("TAURUS \n");
				
			else if((m=='y'&&d>=21)||(m=='e'&&d<=20))
				printf("GEMINI \n");
				
			else if((m=='e'&&d>=21)||(m=='l'&&d<=22))
				printf("CANCER \n");
				
			else if((m=='l'&&d>=23)||(m=='g'&&d<=22))
				printf("LEO \n");
				
			else if((m=='g'&&d>=23)||(m=='s'&&d<=22))
				printf("VIRGO \n");
				
			else if((m=='s'&&d>=23)||(m=='o'&&d<=22))
				printf("LIBRA \n");
				
			else if((m=='o'&&d>=23)||(m=='n'&&d<=21))
				printf("SCORPIO \n");
				
			else if((m=='n'&&d>=22)||(m=='c'&&d<=21))
				printf("SAGITTARIUS \n");
			else
				printf("Please check the date limits \n");
				
			}
				
				
	else
		printf("Please enter the correct date and month considering the advices!!!!");
} 
