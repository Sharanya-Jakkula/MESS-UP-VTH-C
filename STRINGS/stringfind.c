//to print the string using string formatting
#include <stdio.h>
void main(){
   char  ch[15]="BUNNY*JAKKULA";
    printf("To print the first character -15.1s :%-15.1s\n",ch);
    //15 denotes the size
    //value after point denotes the no.of characters to be printed 
    //s denoted the string or character array
    //minus denotes that it is to be printed from the beginning
    //plus denoted to be printed from the end leaving the size from the beginning 
    printf("To print the end character -15.6s :%-15.6s\n",ch);
    printf("To print the end character 15.6s :%15.6s\n",ch);




}
