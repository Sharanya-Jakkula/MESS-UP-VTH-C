//TO PRINT THE CENTER SQUARE 
#include<stdio.h>
void main(){
	int i,j,k;
	for(i=0;i<=4;i++)
	{
	for(j=0;j<=4;j++)
	{
	if(i==0||j==0||j==4||i==4)
	{
	printf("* ");
	}
	else if(i==2&&j==2)
	{
	printf("~ ");
	}
	else
	{
	printf("- ");
	}
	}
	printf("\n");
	}





}
