//to demonstrate  the designated initialisation
#include <stdio.h>
struct question
{
    int a;
    float b;
    int c;
};

void main(){
    struct question q={.b=1,.c=10,.a=15};//assigns values to their respective members 
   printf("a=%d\nb=%.1f\nc=%d\n",q.a,q.b,q.c);
}