//TO CHECK THE POSITION OF A POINT IN THE CARTESIAN PLANE
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the X coordinate and Y coordinate respectively : ");
    scanf("%d %d",&x,&y);
    if((x==0)&&(y!=0))
    	printf("THE POINT LIES ON THE Y-AXIS\n");
    else if((x!=0)&&(y==0))
    	printf("THE POINT LIES ON THE X-AXIS\n");
    else if(x==0&&y==0)
    	{
    	printf("THE POINT LIES ON THE ORIGIN\n");
    	}
    else
    	{
    	printf("Point lies somewhere in the X-Y plane \n");
    	}
 }
