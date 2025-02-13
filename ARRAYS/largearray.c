//TO PRINT THE LARGEST AND SECOND LARGEST NUMBER IN AN ARRAY
#include <stdio.h>
void main(){
    int size=10,arr[size],i,max1=0,max2=0,n;
    printf("Enter the number of elements :\n");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
     }
     max1=arr[0];
     max2=0;
     for(i=1;i<n;i++)
     {
     if(arr[i]>max1)
     {
     max2=max1;
     max1=arr[i];
     }
     }
     printf("The first maximum number from the array is %d\n",max1);
     printf("The second maximum number from the array is %d\n",max2);
}     

