// CHECK PATTERNS
#include<stdio.h>
void main(){
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=2;j>i;j--)
        {
            printf("  ");
        }
        for(k=0;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
        
    }

    printf("%d\n",11+2>6&&!0||11!=7&&11-2<=5);
    printf("%d\n",10!=10||5<4&&8);
    printf("%d\n",10/*++*/*-3/2>3||10^2||2<<1);
    printf("%d\n",10*-3/2>3&&10^2||22<<1);
    printf("%d\n",(10*-3/2>3%(10^2||2<<1)));
    printf("%d\n",(10*-3/2>3%(10^2))<<1);
}