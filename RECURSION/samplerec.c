//TO DEMONSTRATE THE EXAMPLE FOR RECURSION
#include<stdio.h>
int fun(int n);
void main(){
	int n=3;
	fun(n);
}
int fun(int n)
{
	if(n==1)
	{
		printf("%d ",n);
		printf("\n");
		return 1;
	}
	fun(n-1);
	printf("%d ",n);
	printf("\n");
}
