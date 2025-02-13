//TO CALCULATE FACTORIAL OF A NUMBER 
#include <stdio.h>
void main(){
    int i,n;
    printf("Enter the number to know the factorial :\n");
    scanf("%d",&i);
    n=i-1;
    printf("USING WHILE LOOP\n");
    printf("--------------\n");
 while (n>=1)
 {
        if(i==0)
             {
            printf("The factorial is 1 .\n");
        }
        else
        {
            i=i*n;
        }
    n--;
   }
    printf("The factorial of the given number is %d.\n",i);

 //USING FOR LOOP - FACTORIAL
 printf("USING FOR LOOP\n");
 printf("--------------\n");
	int x,y,z;
	printf("Enter the number to know the factorial :\n");
	scanf("%d",&x);
	z=x-1;
	for (;z>1;z--)
	 {
	    if(x>0)
		{
		     x=x*z;
		     //printf("%d \n",x);
		}
	    else
		{
		     printf("The factorial is 1 .\n");
		}
 	}
 	printf("The factorial of the given number is %d.\n",x);
 printf("                \n");
 printf ("Thank you !!!\n");
}

