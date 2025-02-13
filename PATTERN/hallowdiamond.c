//TO PRINT THE HALLOW DIAMOND 
#include<stdio.h>
void main(){
	int i,j,k;
	{
	for(i=0;i<5;i++)
	{
	
	//PRINTING SPACE
	
	for(j=5;j>i;j--)
	{
	printf("  ");
	}
	
	//PRINTING STARS 
	
	for(j=0;j<=0;j++)
	{
		printf("* ");
	}
	//PRINTING SPACE
	for(j=0;j<i;j++)
	{
	printf("  ");
	}
	
	//PRINTING STARS
	
	for(j=1;j<=5;j++)
	{
		if(i==j)
		{
		printf("* ");
		}
		else{
		printf("  ");	
		}
	}
	printf("\n");
	}
	}
	{
	for(i=0;i<=5;i++)
	{
	for(j=0;j<=5;j++)
	{
	if(i==j)
	{
	printf("* ");
	}
	else
	{
	printf("  ");
	}
	}
	for(j=4;j>i;j--)
	{
		printf("  ");
	}
	for(j=0;j<=0;j++)
	{	if(i==5)
			break;
		printf("* ");
	}
	printf("\n");
	//SPACE
	}
	}




}
