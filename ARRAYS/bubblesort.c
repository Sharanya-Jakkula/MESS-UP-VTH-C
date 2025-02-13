//TO SORT THE ELEMENTS USING BUBBLESORT
#include<stdio.h>
void main(){
	int size=10,n=0,i,j,arr[size],flag,temp=0;
	printf("Enter number of elements to be inserted into an array :");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
	for(i=0;i<n-1;i++)
	{
	flag=0;
	for(j=0;j<n-1-i;j++)
	{
	if(arr[j]>arr[j+1])
		{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
		flag=1;
		}
	
	}
	if(flag==0)
		break;
	}	
	//PRINTING THE ARRAY
	printf("The array after sorting is :");
	for(i=0;i<n;i++)
		{
		printf(" %d ",arr[i]);
		if(i==n-1)
			break;
		else
			printf(",");
		}
	}

