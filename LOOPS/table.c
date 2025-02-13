#include<stdio.h>
void main(){
	int a,i=1;
	printf("ENTER THE NUMBER : \n");
	scanf("%d",&a);
	printf("TABLE :\n");
	while(i<=10)
		{
		printf("%d * %d = %d\n",a,i,a*i);
		i++;
		}		


}
