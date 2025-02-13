//to demonstrate pointer to a function
#include <stdio.h>
int (*ip)(int,int);
int func(int,int);
void main(){
    int a,b;
    int result;
    printf("Enter the values of a and b:\n");
    scanf("%d %d",&a,&b);
    ip=func;
    result=(*ip)(a,b);
    printf("The value after addition is %d\n",result);
    

}
int func(int a,int b)
{
    int c=a+b;
    return c;
}