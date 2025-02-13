#include<stdio.h>
#include<math.h>
int num(int);
void main()
{
	int n;
	printf("Enter the number :\n");
	scanf("%d",&n);
	printf("---------------------\n");
	num(n);
	printf("Sum = %d",num(n));
}
int num(int n)
{
int r=7,i=0,j=0,sum=0;

if(n==1)
{
printf("%d ,",r);
}
else
	{
	for(i=1;i<n;i++)
	{
	r=7;
	for(j=1;j<n;j++)
	{
		r=r+7*pow(10,j);
	}
	}
	num(n-1);
	printf("%d ,",r);
	//printf("Sum= %d\n",sum);
	}

}


