//TO CHECK FOR THE PRIME NUMBERS 
#include<stdio.h>
void main(){
	int a,c,i;
	printf("Enter the number to find the whether it is a prime number or not  :\n");
	scanf("%d",&a);
	i=1;
	c=0;
	while(i<=a)
	{
		if(a%i==0)
			c++;
		i++;
	}
	if(c==2)
		printf("IT IS A PRIME NUMBER \n");
	else
		printf("IT IS NOT A PRIME NUMBER \n");
}

