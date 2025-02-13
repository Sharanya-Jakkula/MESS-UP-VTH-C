//to print the char pattern 
#include<stdio.h>
void main(){
	char ch[6]="INDIA";
	int i,j,k;
	for(i=0;i<4;i++)
	{
	for(j=0;j<=i;j++)
	{
	printf("%c ",ch[j]);
	}
	printf("\n");
	}
	//reverse
	for(i=0;i<5;i++)
	{
	for(j=4,k=0;j>=i;j--,k++)
	{
	printf("%c ",ch[k]);
	}
	printf("\n");
	}




}
