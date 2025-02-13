//to demonstrate the struct pack function using a example
#include <stdio.h>
#pragma pack(1)
//there will be no paddind bytes by using the above directive
struct abc{
    double c;
    char a;
    int b;
    }s;
void main(){
    struct abc s;
    printf("The size of struct is %d\n",sizeof(s));//13

    }