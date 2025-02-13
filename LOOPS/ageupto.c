//TO CALCULATE THE AGE UPTO DATE 
#include<stdio.h>
void main(){
	int cd=6,cm=12,cy=2022;
	int bd,bm,by;
	int y,m,d;
	printf("Enter the birth year :\n");
	scanf("%d",&by);
	printf("Enter the birth month:\n");
	scanf("%d",&bm);
	printf("Enter the birth day :\n");
	scanf("%d",&bd);
	if(bd<cd)
	{
	d=cd-bd;
	}
	else
	{
		cm--;
		cd=cd+30;
		d=cd-bd;
	}
	if(bm<cm)
	{
	m=cm-bm;
	}
	else{
		cy--;
		cm+=12;
		m=cm-bm;
	}
	y=cy-by;
	printf("Your age is on 26 Dec : \n%d years \n%d months \n%d days ",y,m,d);
	printf("\n");
}
