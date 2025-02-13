//TO PRINT THE PATTERNS
#include<stdio.h>
void main(){
	int i,j,k;
/*	  * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * * 
* * * * * * * * * * * 

	
	{
	for(i=0;i<=5;i++)
	{
	
		for (j=5;j>i;j--) //INNER LOOP-COLUMNS
		{
		printf("  ");
		}
		for (k=0;k<=i;k++) //INNER LOOP-COLUMNS
		{
		printf("* ");
		}
		for (k=0;k<i;k++) //INNER LOOP-COLUMNS
		{
		printf("* ");
		}
		printf("\n");
	}
	}
	}
	*/	
/*
	  * 
        * * 
      * * * 
    * * * * 
  * * * * * 
* * * * * * 

	{
	for(i=0;i<=5;i++)
	{
	
		for (j=5;j>i;j--) //INNER LOOP-COLUMNS
		{
		printf("  ");
		}
		for (k=0;k<=i;k++) //INNER LOOP-COLUMNS
		{
		printf("* ");
		}
		printf("\n");
	}
	}
	}
	*/
	
/*    * 
     * * 
    * * * 
   * * * * 
  * * * * * 
 * * * * * *
	{
	for(i=0;i<=5;i++)
	{
	
		for (j=5;j>=i;j--) //INNER LOOP-COLUMNS
		{
		printf(" ");
		}
		for (k=0;k<=i;k++) //INNER LOOP-COLUMNS
		{
		printf("* ");
		}
		printf("\n");
	}
}*/

	//OUTER LOOP - ROWS
/*
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
	{
	for(i=0;i<=5;i++)
	{
		for (j=5;j>=i;j--) //INNER LOOP-COLUMNS
		{
		printf("* ");
		}
		printf("\n");
	}
	}
	*/
	
	//INCREASING STAR PATTERN
/*	* 
	* * 
	* * * 
	* * * * 
	* * * * * 
	* * * * * * 
		for(i=0;i<=5;i++) //OUTER LOOP - ROWS
		{
		for (j=0;j<=i;j++) //INNER LOOP-COLUMNS
		{
		printf("* ");
		}
		printf("\n");
		}
		*/

	
	//STAR PATTERN
	
/*	* * * * * 
	* * * * * 
	* * * * * 
	* * * * * 
	* * * * * 
	* * * * *
	
	for(i=0;i<=5;i++) //OUTER LOOP - ROWS
		{
		for (j=0;j<=4;j++) //INNER LOOP-COLUMNS
		{
		printf("* ");
		}
		printf("\n");
		}
	}*/

	//NUMBER PATTERN
	
	/*1	2	3	4	
	  5	6	7	8	
	  9	10	11	12	
	  13	14	15	16	
	  
	  for(i=0;i<=3;i++)
		{
		for (j=0;j<=3;k++,j++)
		{
		printf("%d\t",k);
		}
		printf("\n");
		*/
