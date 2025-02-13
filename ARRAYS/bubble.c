//TO SORT THE ELEMENTS USING BUBBLE SORT - another method 
#include <stdio.h>
void main(){
    int n;
    printf("Enter the size of the array :\n ");
    scanf("%d",&n);
    int arr[n],i,j,temp;
    printf("Enter the elements of an array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
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
//print
printf("Array after sorting :\n");
for(i=0;i<n;i++)
    {
        printf("%d ,",arr[i]);
    }
printf("\n");
}