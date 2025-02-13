//TO DELETE THE ELEMENTS AT THE SPECIFIED POSITION
#include<stdio.h>
void main(){
	int size=10,n=0,i,arr[size],num,pos,temp=0;
	printf("Enter number of elements to be inserted into an array :");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
	printf("Before inserting : \n");
	for(i=0;i<n;i++)
	{
	printf("%d ",arr[i]);
	
	}
	printf("\n");
	printf("Enter the element to be deleted from an array :\n");
	scanf("%d",&num);
	//finding position
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
		pos=i;
		printf("position = %d ",pos);
		break;
		}
	
	}
	for(i=pos+1;i<=n+1;i++)
	{
		arr[i-1]=arr[i];
	}
	//arr[pos]=num;
	printf("After deleting : \n");
	for(i=0;i<n-1;i++)
	{
	printf("%d ",arr[i]);
	}
}

