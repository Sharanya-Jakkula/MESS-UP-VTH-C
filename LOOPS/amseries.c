//TO Print the series of arithmetic progression
#include<stdio.h>
void main(){
	int n,a,d,s;
	int i=2;
	printf("Enter the number of terms,first term and common difference  :\n");
	scanf("%d %d %d",&n,&a,&d);
	s=a;
	printf("%d ,",a);
	while(i<=n)\
	{
		s+=d;
		printf("\t %d",s);
		i+=1;
	}
	}
