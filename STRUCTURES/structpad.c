//to demonstrat the usage of structure padding
#include <stdio.h>
struct abc{
    //char c; -->8
    double c;//16B
    char a;
    int b;
   // double c;//16B
    //float c; ==>12 bytes
    //char c;-->12
    }s;
void main(){
    struct abc s;
    printf("The size of struct is %d\n",sizeof(s));//12

    }