//to demonstrate the recursion
#include<stdio.h>
int multiple(int n);
void main(){
	int n;
	printf("Enter the number :\n");
	scanf("%d",&n);
	printf("The multiples are :\n",n*multiple(n));
}
int multiple(int p)
{
	if(p==1)
	{
		return 1;
		}
	printf("%d ",p*multiple(p-1));
	
	
}
