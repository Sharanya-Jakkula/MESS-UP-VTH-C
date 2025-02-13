//TO PERFORM THE  SUM OF TWO MATRICES
#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,A[20][20],B[20][20],C[20][20],m,n,o,p;
printf("enter first matrix rows and columns:");
scanf("%d %d",&m,&n);
printf("enter second matrix rows and columns:");
scanf("%d %d",&o,&p);
if ((m!=o)||(n!=p))
{
printf("matrix addition is not possible.\n");
exit(0);
}
printf("enter first matrix elements :\n");
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
printf("\ta[%d][%d] : ",i,j);
scanf("%d",&A[i][j]);
}
}
printf("enter second array elements:\n");
for (i=0;i<o;i++)
{
for (j=0;j<p;j++)
{
printf("\tb[%d][%d] : ",i,j);
scanf("%d",&B[i][j]);
}
}
printf("\nadded matrix elements:\n");
printf("C=(A+B)=\n");
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
C[i][j]=A[i][j]+B[i][j];
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
    printf("\t%d",C[i][j]);
printf("\n\n");
}
}
