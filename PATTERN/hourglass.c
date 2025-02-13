//TO PRINT THE HOURGLASS
//TO PRINT THE NUMBER PATTERN IN X
#include<stdio.h>
void main()
{
/*
1 1 1 1 1 1 1 1 1 
  2 2 2 2 2 2 2 
    3 3 3 3 3 
      4 4 4 
        5 
      4 4 4 
    3 3 3 3 3 
  2 2 2 2 2 2 2 
1 1 1 1 1 1 1 1 1 
*/
	int i,j,k,c;
	{
	//UPPER
	c=1;
	for(i=0;i<4;i++,c++)
	{
	for(k=0;k<i;k++)
	{
		printf("  ");
	}
	for(k=4;k>i;k--)
	{
		printf("%d ",c);
	}
	for(j=4;j>=i;j--)
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
		printf("%d ",c);
	}
	for(j=0;j<=i-2;j++)
	{
		printf("%d ",c);
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



