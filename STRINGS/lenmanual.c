//to calculate the length of the string manually(Without functions)
#include <stdio.h>
void main(){
    char name[50];
    int i,len=0;
    printf("Enter your name :\n");
    gets(name);
    i=0;
    while(name[i]!='\0')
    {
        len++;
        i++;
    }
    printf("The length of your name is %d.\n",len);


}