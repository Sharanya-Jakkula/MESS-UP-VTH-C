//TO PRINT THE TWO DIMENSIONAL ARRAY
#include<stdio.h>
void main(){
	 int arr[2][3]={1,2,3,4,5,6},i,j;
	 for(i=0;i<=1;i++)
	 {
	 for(j=0;j<3;j++)
	 	{
	 	printf("%d  ",arr[i][j]);
	 	}
	 printf("\n");
	 printf("That random element :%d \n",arr[0][2]);
	 }
}
