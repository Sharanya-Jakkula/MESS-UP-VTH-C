//to demonstrate the work of free funtion
//double free detected error occurs when we use two free functions
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,i,*ptr;
    printf("Enter number of elements :\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the values :\n");
    //reading 
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    //free(ptr);
    printf("The Entered values are :\n");
    //printing
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
    free(ptr);
    printf("\n%x",ptr);
}