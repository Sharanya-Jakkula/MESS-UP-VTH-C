//TO FIND THE FACTORS OF THE GIVEN NUMBER 
#include<stdio.h>
void main(){
	int a,i;
	printf("Enter the number to find the factors :\n");
	scanf("%d",&a);
	i=1;
	printf("The factors of the given number are :\n");
	while(i<=a)
	{
		if(a%i==0)
			printf("%d \n",i);
		i++;
	}
}




