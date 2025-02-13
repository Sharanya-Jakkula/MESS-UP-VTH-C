//TO PRINT THE  DIAMOND
#include<stdio.h>
void main(){
	int i,j,k;
	//up hill
	
	{
	for(i=0;i<4;i++)
	{
	for(j=4;j>i;j--)
	{
	printf("  ");
	}
	for(k=0;k<=i;k++)
	{
	printf("* ");
	}
	for(k=0;k<i;k++)
	{
	printf("* ");
	}
	printf("\n");
	}
	}
	
	//down hill
	
	{for(i=0;i<=4;i++)
	{
	for(j=0;j<i;j++)
	{
	printf("  ");
	}
	for(k=4;k>=i;k--)
	{
	printf("* ");
	}
	for(k=4;k>i;k--)
	{
	printf("* ");
	}
	printf("\n");
	}
	}
	}

