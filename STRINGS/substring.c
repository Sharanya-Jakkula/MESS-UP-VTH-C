//to check for the position of the substring 
#include <stdio.h>
void main(){
    char m[50],s[10];
    int i,j;
    printf("Enter the main string :\n");
    gets(m);
    printf("Enter the substring :\n");
    gets(s);
    i=0;
    while(m[i]!='\0')
    {
        j=0;
        while(s[j]!='\0')
        {
            if(m[i+j]==s[j])
                {
                    j++;

                }
                else{
                    break;
                }

        }
        if(s[j]==0)
        {
            printf("\t %d \t",i);
            i=i+j;
        }
        else{
            i++;
        }

    }
    }


