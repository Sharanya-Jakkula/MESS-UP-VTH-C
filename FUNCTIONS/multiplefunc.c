//to print the multiples of number using function
#include<stdio.h>
int multiple(int n);
void main(){
	int a;
	printf("Enter the number :");
	scanf("%d",&a);
	//printf("%d ",multiple(a));
	multiple(a);
}
int multiple(int n){
	int i=0;
for(i=1;i<=10;i++)
{
	//return n*i;  --> will return only one value 4
	printf("--> %d \n",n*i);
}

}
