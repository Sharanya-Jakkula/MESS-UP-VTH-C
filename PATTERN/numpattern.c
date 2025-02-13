#include<stdio.h>
void main(){
	int i,j,k,h,c=0;
	/*
 0  1  2  3  4  5  6  7  8  9  10  
   11  12  13  14  15  16  17  18  19  
      20  21  22  23  24  25  26  
         27  28  29  30  31  
            32  33  34  
               35  
*/
	for(i=0;i<=5;i++)
			{
			for(j=0;j<i;j++)
				{
					printf("  ");
				
				}
			for(k=5;k>i;k--,c++)
				{
					printf("%d  ",c);
				}
			for(h=5;h>=i;h--,c++)
				{
				printf("%d  ",c);
				}
				printf("\n");
			}
			}
	/*
0 0 0 0 0 0 0 0 0 0 0 
  1 1 1 1 1 1 1 1 1 
    2 2 2 2 2 2 2 
      3 3 3 3 3 
        4 4 4 
          5 

	for(i=0;i<=5;i++)
			{
			for(j=0;j<i;j++)
				{
					printf("  ");
				}
			for(k=5;k>i;k--)
				{
				printf("%d ",i);
				}
			for(h=5;h>=i;h--)
				{
				printf("%d ",i);
				}
				printf("\n");
			}
			}
			*/
	/*
0 0 0 0 0 0 
  1 1 1 1 1 
    2 2 2 2 
      3 3 3 
        4 4 
          5 

	for(i=0;i<=5;i++)
			{
			for(j=0;j<i;j++)
				{
					printf("  ");
				}
			for(k=5;k>=i;k--)
				{
				printf("%d ",i);
				}
				printf("\n");
			}
			}
			*/
	
/*	0  0  0  0  0  0  
	1  1  1  1  1  
	2  2  2  2  
	3  3  3  
	4  4  
	5  
	for(i=0;i<=5;i++)
			{
			for(j=5;j>=i;j--)
				{
					printf("%d  ",i);
				}
				printf("\n");
				}
				
		}/*
	/*
0  
1  1  
2  2  2  
3  3  3  3  
4  4  4  4  4  
5  5  5  5  5  5  
		for(i=0;i<=5;i++)
			{
			for(j=0;j<=i;j++)
				{
					printf("%d  ",i);
				}
				printf("\n");
			}*/

