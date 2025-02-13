//to demonstrate the differnt types of assigning
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,i,*ptr,*ptr1;
    printf("Enter number of elements :\n");
    scanf("%d",&n);//n=3
    //ptr=(int*)malloc(3*sizeof(int));===>THIS WORKS
    
    //ptr=(int*)malloc(12);//===>THIS WORKS
    
    ptr=(int*)malloc(24);//===>THIS WORKS
    
    free(ptr);//though the values are being extracted 
    
   //cannot be declared like this --> ptr1=(int *)calloc(2);
   
   //    ptr1=(int*)calloc(n,sizeof(int));//works
    ptr1=(int*)calloc(0,sizeof(int));//works
    
    //reading for ptr
    printf("Enter the values ptr :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("The Entered values are (ptr):\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
    //ptr1
    
     printf("Enter the values ptr1 :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr1+i));
    }
    printf("The Entered values are (ptr1):\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr1+i));
    }
    printf("\n");
    //free(ptr);
    




}
