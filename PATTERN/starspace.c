#include<stdio.h>
void main()
{
/*
* * * * * 
* -     * 
*   -   * 
*     - * 
* * * * * 
*/
	int i,j;
	for(i=0;i<=4;i++)
	{
	for(j=0;j<=4;j++)
	{
		if(i==0||i==4)
		{
		printf("* ");
		}
		else if(i==j)
		{
		printf("- ");
		}
		else if(j==0||j==4)
		{
		printf("* ");
		}
		else
		{
		printf("  ");
		}
	}
	printf("\n");
	}
}
