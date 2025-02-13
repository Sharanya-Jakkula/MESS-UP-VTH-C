//BINARY SEARCH FOR AN ELEMENT
#include <stdio.h>
void main(){
    int n,mid,l,h,key;
    printf("Enter the size of the array :\n ");
    scanf("%d",&n);
    int arr[n],i,j,temp;
    printf("Enter the elements of an array :\n");
    l=arr[0];
    h=arr[n-1];
    mid=(n-1)/2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("Enter the element you want to search for  :\n ");
    scanf("%d",&key);
     //printf("Mid value is : %d\n",mid);
printf("Array before sorting :\n ");
for(i=0;i<n;i++)
    {
        printf("%d ,",arr[i]);
    }
printf("\n");
//sorting
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
    if(arr[i]>arr[j])
    {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }

}
}
//sorted
//printing 
printf("Array after sorting :\n");
for(i=0;i<n;i++)
    {
        printf("%d ,",arr[i]);
    }
printf("\n");
//checking value
{
if(arr[mid]==key)
{
	printf("Element %d is found ...\n",key);
}
else if(arr[mid]<key)
{
	for(i=mid;i<n;i++)
	{
		if(arr[i]==key)
		{
		printf("Element %d is found ...\n",key);
		}
		else
			printf("Element %d is not found \n",key);
	}

}
else if(arr[mid]>key)
{
	for(i=0;i<mid;i++)
	{
		if(arr[i]==key)
		{
		printf("Element %d is found ...\n",key);
		}
		else 
			printf("Element %d is not found \n",key);
		
	}

}

}
}
