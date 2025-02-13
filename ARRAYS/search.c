//TO SEARCH FOR AN ELEMENT IN AN ARRAY
#include<stdio.h>
void main(){
	int arr[]={10,30,15,35,29},found=0,num,i;
	printf("Enter the element to search :\n");
	scanf("%d",&num);
	for(i=0;i<=4;i++)
	{
	if(arr[i]==num)
		found++;
	if(found==1)
	{
	printf("The element %d is found at position %d.\n",num,i);
	break;
	}
	}
	if(found==0)
		printf("Element is not found .\n");
}

