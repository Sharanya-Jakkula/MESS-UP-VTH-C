//TO CONVERT BINARY TO DECIMAL
#include <stdio.h>
#include <math.h>
void main(){
    //int a,temp,i=1,r,rev=0,c=0,j,count;
    int n,n1,r,bin=0,i=1,rem;
    printf("Enter Decimal number : ");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
    	rem=n%2;
    	bin=bin+(rem*i);
    	n=n/2;
    	i=i*10;
    }
    printf("Binary equivalent : %d ",bin);
 
}

