#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,k,A[20][20],B[20][20],C[20][20],m,n,o,p;
printf("enter first matrix rows and columns:");
scanf("%d %d",&m,&n);
printf("enter second matrix rows and columns:");
scanf("%d %d",&o,&p);
if (n!=o)
{
printf("matrix product is not possible.\b");
    exit(0);
}
printf("enter first matrix elements :\n");
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
printf("\tA[%d][%d] : ",i,j);
scanf("%d",&A[i][j]);
}
}
printf("enter second array elements:\n");
for (i=0;i<o;i++)
{
for (j=0;j<p;j++)
{
printf("\tB[%d][%d] : ",i,j);
scanf("%d",&B[i][j]);
}
}
printf("\nmultiplied matrix elements:\n");
printf("C=(AB)=\n");
for (i=0;i<m;i++)
{
for (j=0;j<p;j++)
{
C[i][j]=0;
for (k=0;k<n;k++)
C[i][j]+=A[i][k]*B[k][j];
}
}
for(i=0;i<p;i++)
{
for(j=0;j<p;j++)
printf("\t%d",C[i][j]);
printf("\n\n");
}
}

