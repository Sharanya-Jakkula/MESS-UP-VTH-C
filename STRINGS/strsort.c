//to sort the  character of a name
#include<stdio.h>
#include<string.h>
void main(){
    char name[10],temp;
    int i,j=0,l;
    printf("Enter the name :\n");
    gets(name);
    l=strlen(name);
    printf("String before sorting :\n");
    puts(name);

    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
            if(name[i]>name[j])
            {
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
    }
    printf("String after sorting :\n");
    puts(name);




} 