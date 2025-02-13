//to demonstrate the usage of union
//only the last entered data will be retained in unions
#include <stdio.h>
union abc
{
    int a;
    char b;
    float c;

};
void main()
{
    union abc U;
    U.a=1;
    U.b=97;
    U.c=9.20;
    printf("a=%d\n",U.a);
    printf("b=%d\n",U.b);
    printf("c=%f\n",U.c);//this will be present since it is the last returned 



}
