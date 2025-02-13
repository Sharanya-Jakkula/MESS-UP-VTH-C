//TO CONVERT THE BINARY NUMBER TO OCTAL 
#include<stdio.h>
#include<math.h>
void main(){
	int num,dec=0,r,i=1,temp,p=0,oct=0;
	printf("Enter the Binary number :\n");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
	r=num%10;
	dec=dec+r*pow(2,p);
	num=num/10;
	p++;
	}
	printf("Decimal equivalent =%d\n",dec);
	//OCTAL NUMBER 
	r=0;
	num=temp;
   	while(dec!=0)
       {
    	r=dec%8;
    	oct=oct+(r*i);
    	dec=dec/8;
    	i=i*10;
      }
    printf("OCTAL equivalent : %d \n",oct);
	




}
