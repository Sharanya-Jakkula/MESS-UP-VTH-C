//TO FIND THE EFFECIENCY OF A WORKER
#include<stdio.h>
void main()
{
    int t;
    printf("Enter the time required to complete the job  :\n");
    scanf("%d",&t);
    if(t<=3&&t>=1)
        printf("The worker is highly efficient\n");
    else if(t<=4&&t>=3)
        printf("The Worker needs to improve his speed\n");
    else if(t<=5&&t>=4)
	{
	printf("Feels like the worker needs training\n");
	printf("PLease go ahead\n");
	}
    else
    {
	printf("WE ARE SORRY!!!\n");	
	printf("YOU ARE TERMINATED.\n");
    }
}
