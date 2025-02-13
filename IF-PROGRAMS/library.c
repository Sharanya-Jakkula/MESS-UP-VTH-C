//TO CALCULATE THE NUMBER OF DELAY DAYS AND FINE
#include<stdio.h>
void main()
{
    int d;
    printf("Enter the number of delay days  :\n");
    scanf("%d",&d);
    if(d>0&&d<=5)
    	{
    	printf("You will have to pay 50 paise fine per each day passing \n");
    	printf("Please return as soon as possible \n");
    	}
    else if(d>=6&&d<=10)
    	{
    	printf("You will have to pay 1 rupee fine per each day passing \n");
    	printf("Please return as soon as possible \n");
    	}
     else if(d>=10&&d<=30)
    	{
    	printf("You will have to pay 5 rupees fine per each day passing \n");
    	printf("Please return as soon as possible \n");
    	}
    else
    {
    	printf("WE ARE SORRY!!!!!\n");
    	printf("Your membership is cancelled.\n");
    }
}
