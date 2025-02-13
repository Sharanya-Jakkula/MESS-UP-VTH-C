//to demonstrate the pointer operations
#include <stdio.h>
void main(){
    int x=10,y=100,sum=0,mul=0,div=0,sub=0,z;
    int *p,*q;
    p=&x;
    q=&y;
    sum=*p+*q;//110
    sub=*p-*q;//-90
    mul= (*p)*(*q);//1000
    div=(*p)/(*q);//0
    printf("%d\n",sum);//110
    printf("%d\n",sub);//-90
    printf("%d\n",mul);//1000 or 
    printf("%d\n",div);//0 doubt
    printf("%d\n",*p+2);//12
    z=*p / *q +5;//=5 since division returns 0
    printf("z=%d\n",z);

//TWO POINTERS CANNOT BE ADDED
//MULTIPLY OR DIVIDE A POINTER IN AN EXPRESSION IS  OT ALLOWED
//P1=P2/5;
//P1=P1-P2*10;
//integer value can be added or subtracted from a pointer variable
    printf("%d\n",p+1);
    printf("%d\n",p++);
    printf("%d\n",q+1-4);
    printf("size of int = %d\n",sizeof(int));
    printf("size of float = %d\n",sizeof(float));
    printf("size of char = %d\n",sizeof(char));
     printf("size of double = %d\n",sizeof(double));



}
