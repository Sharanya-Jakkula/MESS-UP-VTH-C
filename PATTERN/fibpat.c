//TO PRINT THE FIBONACCI PATTERN
#include<stdio.h>
void main(){
	int a,b,fib=0,n,count,i,j;
	a=0;
	b=1;
	printf("FIBONACCI SERIES :\n");
	//pattern printing 
	for(i=0;i<=4;i++)
	{
	for(j=4;j>i;j--)
	{
	printf("  ");
	}
	for(j=0;j<i;j++)
	{
	printf("%d ",a);
	fib=a+b;
	a=b;
	b=fib;
	//a++;
	}
	for(j=0;j<=i;j++)
	{
	printf("%d ",a);
	fib=a+b;
	a=b;
	b=fib;
	}
	printf("\n");
	}
	}


