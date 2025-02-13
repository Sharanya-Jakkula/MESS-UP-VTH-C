#include<stdio.h>
void main(){
    int a=200,b=20,c;
    int *p,*q;
    p=&a,&b;//p=&a
    //p=(&a,&b);//p=&b bcoz of comma operator
    printf("a=%d\n",a);
    printf("*ptr=%d\n",*p);
    printf("p=%d\n",p);
    //++p;
    *p=30;
    q=&b;
    c=*q;
    printf("*p+1=%d\n",*p+1);//address-31
    p=p+2;//adds 8 bytes
    *p=119;//assignment
    printf("ptr p=%d\n",p);
    printf("c= %d\n",c);
    printf("a- after assigning : %d\n",*p);
    printf("ptr after assigning  p=%d\n",p);
    *p=*q;
    printf("b : %d\n",b); //20
    printf("*p=*q --> %d\n",*p);//20

}
