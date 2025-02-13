//TO check validity of a triangle
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the angles of a triangle  :\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b+c)==180)
        printf("This is valid triangle\n");
    else
       printf("This is not a valid triangle \n");
}
//---------------------------------------
