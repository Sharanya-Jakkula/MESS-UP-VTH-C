//TO CONVERT BINARY TO DECIMAL
#include <stdio.h>
#include <math.h>
void main(){
    int num,r,d=0,p=0,div=0;
    printf("Enter the number :\n");
    scanf("%d",&num);
    while (num!=0)
    {
        r=num%10;
        //printf("%d",r);
        div=pow(2,p);
        //printf("power : %d \n",div);
        d=d+r*div;
        num=num/10;
        p++;
    }
    printf("The binary equivalent of the given number = %d ",d);


}