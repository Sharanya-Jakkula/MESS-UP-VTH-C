#include <stdio.h>
void main(){
    int x=5,i=1;
    printf("The numbers are :\n");
    for ( ; i<=10; i++)
    {
        if(i==x)
            continue;
        printf("%d\n",i);
    }


}