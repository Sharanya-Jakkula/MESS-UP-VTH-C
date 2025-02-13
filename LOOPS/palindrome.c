//TO CHECK FOR A PALINDROME
#include<stdio.h>
#include<math.h>
void main(){
    int a,temp,i=1,r,rev=0,c=0,act;
    printf("Enter the number :\n");
    scanf("%d",&a);
    temp=a;
	act=0;
    //LENGTH OF THE NUMBER 
	while(a!=0)
	{
	a=a/10;
	c++;
	}
	printf("LENGTH OF THE NUMBER : %d \n",c);
	a=temp;
	while(c!=0)
		{
		r=a%10;
		rev=rev+(r*pow(10,c-1));
		a=a/10;
		c--;
		}
	printf("The reverse of the entered number  : %d\n",rev);
if(temp==rev)
	printf("The given number is a palindrome \n");
else
{
	printf("The given number is not a palindrome \n");
}

}
