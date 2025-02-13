//TO PRINT THE X PATTERN
#include<stdio.h>
void main()
{
	int i,j,k;
	{
	//UPPER
	for(i=0;i<4;i++)
	{
	for(j=0;j<=3;j++)
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
	for(k=4;k>i;k--)
	{
		printf("  ");
	}
	for(j=0;j<=0;j++)
		{
		printf("* ");
		}
	printf("\n");
	}	
	}
	{
	//LOWER
	for(i=0;i<=4;i++)
	{
	for(j=3;j>=i;j--)
	{
	printf("  ");
	}
	for(j=0;j<=0;j++)
		{
		printf("* ");
		}
	for(j=0;j<=i-1;j++)
	{
		printf("  ");
	}
	for(j=0;j<=i-2;j++)
	{
		printf("  ");
	}
	for(j=0;j<=0;j++)
		{
		if(i==0)
			continue;
		else
			printf("* ");
		
		}
	printf("\n");
	}	
	}
	}




