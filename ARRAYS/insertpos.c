//TO INSERT THE ELEMENTS IN BETWEEN
#include<stdio.h>
void main(){
	int size=10,n=0,i,arr[size],num,pos;
	printf("Enter number of elements to be inserted into an array :");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);		}
	printf("Array before inserting : \n");
	for(i=0;i<n;i++)
	{
	printf("%d ,",arr[i]);
	}	
	printf("\n");
	printf("Enter the element to be inserted into an array\n");
	scanf("%d",&num);
	printf("Enter the position to be inserted into an array\n");
	scanf("%d",&pos);
	arr[pos]=num;
	printf("Array after inserting : \n");
	for(i=0;i<n;i++)
	{
	printf("%d ,",arr[i]);
	}	
	printf("\n");

}
