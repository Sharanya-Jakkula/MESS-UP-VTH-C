//TO CALCULATE AGGREGATE MARKS AND PERCENTAGE
#include<stdio.h>
void main()
{
float CLA,PSPC,IC,ENG,BEE,AGGREGATE,PERCENT;
printf("Enter CLA marks :\n");
scanf("%f",&CLA);
printf("Enter PSPC marks :\n");
scanf("%f",&PSPC);
printf("Enter IC marks :\n");
scanf("%f",&IC);
printf("Enter ENG marks :\n");
scanf("%f",&ENG);
printf("Enter BEE marks :\n");
scanf("%f",&BEE);
AGGREGATE=CLA+PSPC+IC+ENG+BEE;
PERCENT=AGGREGATE/5;
printf("Aggregate marks are %.2f \n",AGGREGATE);
printf("Percentage is %.2f \n",PERCENT);

}