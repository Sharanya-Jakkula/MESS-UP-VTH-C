//to demonstrate the calloc function
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,i,*ptr;
    printf("Enter number of elements :\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
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
    printf("ptr after freed :%p",ptr);//printing some random accessed hexadecimal value
    printf("\n");




}