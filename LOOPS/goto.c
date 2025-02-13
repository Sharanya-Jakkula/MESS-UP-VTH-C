//to determine the usage of goto statement 
#include<stdio.h>
#include <math.h>
void main(){
    int i=1,x=10,count=1;
    label:
        printf("i : %d , x : %d\n",i,x);
        i++,x++;count++;
    if(count<=2)
        goto label;

} 