//TO PRINT THE BOXER WEIGHT CLASS 
#include<stdio.h>
void main(){
	int w;
	printf("Enter the body weight of the  boxer :\n");
	scanf("%d",&w);
	if(w<115)
		printf("FLYWEIGHT\n");
	else if(w>=115&&w<=121)
		printf("BANTAMWEIGHT\n");
	else if(w>=122&&w<=153)
		printf("FEATHERWEIGHT\n");
	else if(w>=154&&w<=189)
		printf("MIDDLEWEIGHT\n");
	else if(w>=190)
		printf("HEAVYWEIGHT\n");
	else
		printf("Please enter the weight correctly\n");
} 
