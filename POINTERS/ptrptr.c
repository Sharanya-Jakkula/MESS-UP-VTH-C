//to demonstrate the pointer to pointer 
#include <stdio.h>
void main(){
         int a=10,b=20;
         int *p,**q,***r;
         p=&a;
         q=&p;
         r=&q;
         *p=12;//a=12
         **q=30;//a=30
         ***r=100;//a=100 but prints the last read statement
        printf("p=%x\n",p);
        printf("q=%x\n",q);
        printf("r=%x\n",r);
        printf("a=%d\n",*p);//10
        printf("a=%d\n",**q);//10
        printf("a=%d\n",***r);//10

}
