//to perform string operations
#include <stdio.h>
void main(){
    unsigned char a[]="DHONI183";
    int i;
    for(i=0;i<10;i++)
    {
        if(a[i]!='\0')
            printf("%c \n",a[i]);//a[i++] ==> 1,3

    }


}
