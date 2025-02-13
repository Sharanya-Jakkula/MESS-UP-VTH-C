//MERGING
#include <stdio.h>
int main(){
    int arr1[50],arr2[50],size1,size2,i,k,merge[100];
    printf("Enter array size1 : \n");
    scanf("%d",&size1);
    printf("Enter array1 elements :\n");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
       // merge[i]=arr1[i];
    }
    //k=i;
    printf("Enter array size2 : ");
    scanf("%d",&size2);
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
        //merge[k]=arr2[i];
        //k++;
    }
    for(i=0;i<size1+size2;i++)
    {
    if(i<size1)
    {
    merge[i]=arr1[i];
    }
    else
    	merge[i]=arr2[i-size1];
    }
    printf("\nThe new array after merging is :\n ");
    for(i=0;i<size1+size2;i++)
    {
        printf("%d ,",merge[i]);
    }
    return 0;


}
