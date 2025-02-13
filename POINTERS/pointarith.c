//to find the output 
#include <stdio.h>
void main(){
    int x[5]={10,4,8},*p;
    p=x; //for array this is address and for variable this is a value
    printf("*p=%d\n",*p);//10
    printf("*p++=%d\n",*p++);//10
        printf("*p=%d\n",*p);//4

    printf("p1=%d\n",(*p)+1);//11 5
    printf("p2=%d\n",*(p)++);//10 4
    printf("p3=%d\n",(*p+1));//5 9





    //int x=10,*p;
    //p=&x;


   // printf("p=%d",p);

   /* int x[5]={10,4,8},*p;
    p=x;//for array this is address and for variable this is a value*/


}