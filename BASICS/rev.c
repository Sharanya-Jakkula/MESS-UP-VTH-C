//TO REVERSE THE GIVEN NUMBER 
#include<stdio.h>
void main()
{
    int x,z,dig,y=0;
    printf("Enter any FIVE digit-number :\n");
    scanf("%d",&x);
   //one
    z=x%10;  
    y=z*10000;
    dig=0+y;
    //two
    x=x/10;
    z=x%10;  
    y=z*1000;
    dig=dig+y;
    //three
    x=x/10;
    z=x%10;  
    y=z*100;
    dig=dig+y;
    //four
    x=x/10;
    z=x%10;  
    y=z*10;
    dig=dig+y;
    //five
    y=x/10;
    dig=dig+y;
    printf("The reverse of the number  is %d\n",dig);
}
