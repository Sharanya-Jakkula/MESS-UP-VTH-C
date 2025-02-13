//to demonstrate the realloc function
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,i,*ptr;
    printf("Enter number of elements :\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    printf("Enter the values :\n");
    //reading 
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("The Entered values are :\n");
    //printing
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
    printf("Enter the updated number of elements :\n");
    scanf("%d",&n);
    int *ptr1=(int*)realloc(ptr,n*sizeof(int));
    printf("previous address %d ,new address %d \n",ptr,ptr1);
    printf("Enter the values :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("The Entered values are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
    free(ptr);
    //free(ptr1);--->double free detected
    printf("ptr after freed :%p",ptr);//printing some random accessed hexadecimal value
    printf("\n");




}