#include<stdio.h>
void main(){
	int i,j=2,k=2,c=1;
	
   /*   * 
      * * 
    * - * 
  * - - * 
* * * * * */
	for(i=1;i<=5;i++)
	{
	for(k=5;k>i;k--)
	{
	printf("  ");
	}
	for(j=1;j<=i;j++)
	{
	if(i==3&&j==2)
		printf("- ");
	else if(i==4&&(j==2||j==3))
		printf("- ");
	else
		printf("* ");
	}
	
	printf("\n");
	}
	}
	
/*
      1 
    1 2 
  1 2 3 
1 2 3 4 

	for(i=1;i<=4;i++)
	{
	for(k=4;k>i;k--,c++)
	{
	printf("  ");
	}
	for(j=1;j<=i;j++)
	{
	printf("%d ",j);
	}
	
	printf("\n");
	}
	}
	*/
	
	
	
	
	
	
	
	/*
* * * 
* * - 
* - -
	for(i=0;i<=2;i++)
	{
	for(k=2;k>=i;k--,c++)
	{
	printf("* ");
	}
	for(j=0;j<i;j++)
	{
	printf("- ");
	}
	
	printf("\n");
	}
	}
	*/
	
/*
1  2  3  4  5  6 
7  8  9  10  11 
12  13  14  15 
16  17  18 
19  20 
21 


	for(i=0;i<=6;i++)
	{
	for(k=5;k>=i;k--,c++)
	{
	printf(" %d ",c);
	}
	printf("\n");
	}
}*/

/*
          1 
        2 2 
      3 3 3 
    4 4 4 4 
  5 5 5 5 5 
6 6 6 6 6 6 
int i,j=6,k=6;
	for(i=1;i<=6;i++)
	{
	for(k=5;k>=i;k--)
	{
	printf("  ");
	}
	for(j=1;j<=i;j++)
	{
	printf("%d ",i);
	}
	printf("\n");
	}*/
	
	/*
 6  6  6  6  6  6 
 5  5  5  5  5 
 4  4  4  4 
 3  3  3 
 2  2 
 1 
	for(i=0;i<=6;i++,c--)
	{
	for(k=5;k>=i;k--)
	{
	printf(" %d ",c);
	}
	printf("\n");
	}
*/
