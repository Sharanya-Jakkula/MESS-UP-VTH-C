#include<stdio.h>
#include<math.h>
void main(){
	//A.N: 371,9474,153,1634
	int a,temp,i,count=0,sum=0,j,b,k,l;
	printf("Enter the number :\n");
	scanf("%d",&a);
	temp=a;
	//FINDING THE LENGTH OF THE NUMBER
	temp=a;
	for(i=0;i<=temp;i++)
		{
		if(a>0)
			{
			count++;
			a=a/10;
			}
		else
			break;
		}
		//printf("The length of the entered number is %d\n",count);
	a=temp;
	//printf("DIGITS\n");
	for(j=0;j<=count;j++)
	{
		b=a%10;
		l=1;
		//printf("%d \n",b);
		for(k=0;k<count;k++)
			{
			l=l*b;
			}
		//printf(" l = %d",l);
		sum=sum+l;
		a=a/10;
	}
	//printf("sum=%d",sum);
	if(sum==temp)
		printf("The given number %d is an armstrong number \n",temp);
	else
		printf("The given number %d is not an armstrong number \n",temp);
	}
	
