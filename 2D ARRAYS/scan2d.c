//TO CALCULATE THE SUM OF ROW ELEMENTS IN 2D ARRAYS 
#include<stdio.h>
void main(){
	 int i=0,j=0,r=0,c=0,sumr,sumc;
	 printf("ENTER THE ROWS : ");
	 scanf("%d",&r);
	 printf("ENTER THE COLUMNS : ");
	 scanf("%d",&c);
	 int arr[r][c];
	 printf("Enter the elements in the array :\n");
	 for(i=0;i<r;i++)
	 {
	 for(j=0;j<c;j++)
	 {
	 	 scanf("%d",&arr[i][j]);
	 }
	 }
	 
	 //printing 
	 
	 printf("The elements are :\n");
	  for(i=0;i<r;i++)
	 {
	 for(j=0;j<c;j++)
	 {
	 	 printf("%d ,%d = %d\t",i,j,arr[i][j]);
	 	}
	 	printf("\n");
//printf("I AM DONE JUST FOR NOW\n");
	 }
}
