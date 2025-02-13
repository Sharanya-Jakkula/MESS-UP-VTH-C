#include<stdio.h>
void main(){
	int a,c,i,n,j,temp;
	printf("Enter the number upto which you want to print the prime  numbers:\n");
	scanf("%d",&n);
	i=1;
	printf("The prime numbers are upto given number are :\n");
	while(i<=n)
	{
		temp=i;
		c=0;
		j=1;
		for(j=1;j<=temp;j++)
			{
			if(temp%j==0)
				c++;
			}
		if(c==2)
			printf("%d\n",i);
		i++;
	}
}

