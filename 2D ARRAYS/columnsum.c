//to calculate the column sum
#include<stdio.h>
void main(){
int i,j,r,c,sum=0;
printf("Enter the number of rows  :\n");
scanf("%d",&r);
printf("Enter the number of columns  :\n");
scanf("%d",&c);
int arr[r][c];
printf("Enter the elememts :\n");
//scan the elements
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
	printf("%d\t",arr[i][j]);
}
printf("\n");
}
//
for(j=0;j<c;j++)
{
sum=0;
for(i=0;i<r;i++)
{
	printf("%d %d = %d",i,j,arr[i][j]);
	sum=sum+arr[i][j];
}
printf("The sum of column is %d\n",sum);
}
}

