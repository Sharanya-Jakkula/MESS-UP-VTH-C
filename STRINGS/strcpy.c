//to copy the string
//to swap to strings
#include <stdio.h>
#include <string.h>
void main(){
    char str1[10],str2[10],temp[10];
    printf("Enter the first string :\n");
    gets(str1);
    //strcpy(str2,str1);
    printf("Enter the second  string :\n");
    gets(str2);

    puts("Before swapping :\n");
    puts("string1:");
    puts(str1);
    puts("string2:");
    puts(str2);
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("\n");
printf("After swapping :\n");
puts("string1:");
    puts(str1);
    puts("string2:");
    puts(str2);
    
}