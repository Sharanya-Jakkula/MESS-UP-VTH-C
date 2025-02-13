//to perform string operations
#include <stdio.h>
#include <string.h>
void main(){
    char str1[7]="ROLLS",str2[7]="ROYCE",a[7]="ROLLS",b[7]="ROYCE";
    int res=0;
    //without space concatenates correctly
    //With space concatenation is wrong
    strcat(str1,str2);
    printf("%s\n",str1);
    puts(str1);
    res=strcmp(str2,str2);//res=0
    res=strcmp(str1,str2);//res=-7
    res=strcmp(str2,str1);//res=7
    //strcpy(str,str1);
   // puts(str);
    res=strcmp(a,b);//res=7
    printf("Res = %d\n",res);
    char strx[7]="ROLLS";
    puts(strstr(strx,"ROLL"));
    //returns the whole string
}