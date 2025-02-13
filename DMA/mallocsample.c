// to perform some operations on malloc function
#include<stdio.h>
#include <stdlib.h>
void main()
{
    int x[10],*ptr,n,i;
    ptr=x;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    if(ptr=NULL)
    {
        printf("Memory is not allocated \n");
        exit(0);
    }
    else{
        printf("Enter the elements :\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",x+i);
        }
        printf("The entered elements are :\n");
        for (i=0;i<n;i++)
        {
           printf("%d\t",*(x+i));// --> This works        }
    }
    }
}
