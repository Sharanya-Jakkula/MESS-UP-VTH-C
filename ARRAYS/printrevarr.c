// TO PRINT THE ARRAY IN REVERSE ORDER
#include<stdio.h>
void main (){
    int arr[7],i;
    printf("Enter the elements of the array :\n");
    for(i=0;i<=6;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("ARRAY BEFORE REVERSING :\n");
    for(i=0;i<=6;i++)
    {
    printf("%d ,",arr[i]);
    }
    printf("\n");
    printf("ARRAY AFTER  REVERSING :\n");
    for(i=6;i>=0;i--)
    {
    printf("%d ,",arr[i]);
    }
    printf("\n");
}