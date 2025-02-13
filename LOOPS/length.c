#include<stdio.h>
void main(){
	int a,temp,i,count=0;
	printf("Enter the number :\n");
	scanf("%d",&a);
	temp=a;
	for(i=0;i<=temp;i++)
		{
		if(a>0)
			{
			count++;
			printf(" count = %d \n",count);
			a=a/10;
			printf("a = %d ",a);
			}
		else
			break;
		}
		printf("The length of the entered number is %d\n",count);
}
