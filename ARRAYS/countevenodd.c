//TO count the number of even and odd numbers in an array
#include<stdio.h>
void main (){
    int arr[7],i;
    int even=0,odd=0;
    printf("Enter the elements of the array :\n");
    for(i=0;i<=6;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<=6;i++)
    {
    if(arr[i]%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    }
    printf("The number of even numbers in the given array is %d\n",even);
    printf("The number of odd numbers in the given array is %d\n",odd);

}