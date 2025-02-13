//TO CHECK IF A STRING IS A PALINDROME
// USING MAXIMUM OF THE STRING FUNCTIONS
#include <stdio.h>
#include <string.h>
void main(){
    int len=0,res=0;
    char str1[10];
    char copy[10];
    char str2[10];

    printf("Enter the string1 :\n");
    gets(str1);
     printf("Enter the string2 :\n");
    gets(str2);
    printf("The given string1 is :");
    puts(str1);
    printf("The given string2 is :");
    puts(str2);

    len=strlen(str1);
    printf("The length of a given string1 is : %d\n",len);
    //strcpy(copy,str1);
    //printf("%s",copy);
    strcat(str1,str2);
    printf("After concatenating :\n");
    puts(str1);
    res=strcmp(str1,str2);
   puts(strcmp(str1,str2));
      //  printf("COMPARISON : %d\n",res);
   // strset('r','~');
}
//other functions 
/*
strncpy();
strncat();
strcmpi();
strstr();
strrstr();
strchr();
strlwr();
strup();
strrev();
strdup();
strset();
strnset();
strtok():


        */
