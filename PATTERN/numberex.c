//TO PRINT THE NUMBER PATTERN IN X
#include<stdio.h>
void main()
{
	int i,j,k,c;
	{
	//UPPER
	for(i=0;i<4;i++)
	{
	for(j=0;j<=3;j++)
	{
	if(i==j)
	{
	printf("%d ",i+1);
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
		printf("%d ",i+1);
		}
	printf("\n");
	}	
	}
	{
	//LOWER
	c=5;
	for(i=0;i<=4;i++,c--)
	{
	for(j=3;j>=i;j--)
	{
	printf("  ");
	}
	for(j=0;j<=0;j++)
		{
		printf("%d ",c);
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
			printf("%d ",c);
		
		}
	printf("\n");
	}	
	}
	}




