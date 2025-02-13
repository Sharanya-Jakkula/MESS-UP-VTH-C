//to demonstrate the malloc function
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,i,*ptr;
    printf("Enter number of elements :\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    //this section giving rise to segmentation fault
   /* if(ptr=NULL)
    {
        printf("Memory is not allocated..\n");
    }
    else
    {
        printf("Memory is allocated..\n");
    }*/
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
    




}