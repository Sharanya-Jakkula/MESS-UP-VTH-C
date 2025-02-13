//TO INIALIZE THE ARRAY IN DIFFERENT FORM
#include <stdio.h>
void main (){
    int arr[]={[4]=4,[2]=12,[5]=15},i;
    printf("The elements of the array are :\n");
    for(i=0;i<=5;i++)
    printf("%d\n",arr[i]);
}
//remaining are initialised with zeroes