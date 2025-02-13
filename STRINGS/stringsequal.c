//to print whether the strings are equal are not 
#include <stdio.h>
void main(){
    int i,x;
    char str1[10],str2[10];
    x=0;
    printf("Enter the string1 :\n");
    gets(str1);
    printf("Enter the string2 :\n");
    gets(str2);
    for(i=0;str1[i]!=0&&str2[i]!=0;)
    {
    if(str1[i]!=str2[i])
        {
            x=str1[i]-str2[i];
            //printf("%d\t",x);
             break;
        }
    i++;
    }
    //if(x==0&&)
    if(x==0)
        printf("Equal \n");
    else    
        printf("Not equal\n");
}