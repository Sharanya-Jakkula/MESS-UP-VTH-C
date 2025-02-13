//to demonstrate the arrays in terms of pointers
#include <stdio.h>
void main(){
    int a[5]={1,3,2,4,5};
    int *p,*q;
    p=a;
    q=&a[4];
    printf("Address=%d\n",p);
    printf("Value=%d\n",*p);//value at a[0]
    p+1;//has no effect on the program
    printf("Value=%d\n",*(p+1));//gives the value at a[1]
    p+=2;
    *p=10;//assigns p value at that particular p position
    printf("P= %d\n",*p);//a[2]-->10
    //a=a+2; resolves to error
    p++;
    printf("p=%d\n",*p);//4
    printf("q=%d\n",*q);//5
    printf("P-Q=%d\n",p-q);//-1
    printf("Q-P=%d\n",q-p);//1-returns the number of elements in between

    }