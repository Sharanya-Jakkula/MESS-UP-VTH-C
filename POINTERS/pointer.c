//to print the pointers
#include<stdio.h>
void main()
{
    int *p,x=10,v;
    p=&x;
    printf("%d\n",p);//integer - different value from below
    //Shows same value
    printf("%u\n",&x);//same as below
    printf("%u\n",p);//same of above


    printf("%p\n",p);//%p prints the hexadecimal number 
    printf("Value using pointer = %d\n",*p);
    printf("%d\n",*p+2);//12
    //opns
    *p=*p+4;
    printf("%d\n",*p);//14
    v=*p+4;
    printf("%d",v);//18





}