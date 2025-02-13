//to print the transpose of a matrix
#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,k,A[20][20],B[20][20],m,n;
printf("enter first matrix rows and columns:");
scanf("%d %d",&m,&n);
printf("enter first matrix elements :\n");
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
printf("\tA[%d][%d] : ",i,j);
scanf("%d",&A[i][j]);
}
}
//printing
printf("Before transpose :\n");
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}
//transpose
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
B[j][i]=A[i][j];
}
}
//pritning
printf("The transpose matrix is :\n");
for (i=0;i<n;i++)
{
for (j=0;j<m;j++)
{
printf("%d\t ",B[i][j]);
}
printf("\n");
}
}
