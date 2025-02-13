//to calculate the sum of row 
#include<stdio.h>
void main(){
int i,j,r,c,sum=0;
printf("Enter the number of rows  :\n");
scanf("%d",&r);
printf("Enter the number of columns  :\n");
scanf("%d",&c);
int arr[r][c];
printf("Enter the elememts :\n");
for(i=0;i<r;i++)
{
sum=0;
for(j=0;j<c;j++)
{
	scanf("%d",&arr[i][j]);
	sum=sum+arr[i][j];
	}
	printf("The sum of row is %d\n",sum);
	printf("Enter the elememts :\n");
}

}
