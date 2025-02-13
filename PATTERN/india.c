//to print the india pattern
#include<stdio.h>
void main(){
    char ch[6]="INDIA";
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("%*.*s\n",i,ch);
        }

    }
}
