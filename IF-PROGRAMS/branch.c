//TO TAKE THE INPUT AS BRANCH AND PRINT THE OTHER DETAILS
#include<stdio.h>
//#include<conio.h>
void main(){
	char branch[10];
	char id[10],name[10];
	long int phone;
	printf("Enter the name :\n");
	scanf("\n%s",name);
	printf("Enter the ID :\n");
	scanf("\n%s",id);
	printf("Enter the Branch :\n");
	scanf("\n%s",branch);
	printf("Enter the Phone number  :\n");
	scanf("%ld",&phone);
	printf("\n");
	//PRINTING THE DETAILS
	printf("NAME    :  %s \n",name);
	printf("ID      :  %s \n",id);
	printf("BRANCH  :  %s \n",branch);
	printf("CONTACT :  %ld \n",phone);



}
