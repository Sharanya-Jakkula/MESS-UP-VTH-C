//to sort strings in two dimensional array
#include<stdio.h>
#include <string.h>
void  main(){
    char city[4][10]={"Kurnool","Anantapur","Chittor","Kadapa"},temp[10];
    int i,j;
    printf("Array before sorting :\n");
    for(i=0;i<4;i++)
    {
       puts(city[i]);
       printf("\n");

    }

    for(i=0;i<3;i++)
    {
            if(strcmp(city[i],city[i+1])>0)
            {
        strcpy(temp,city[i]);
        strcpy(city[i],city[i+1]);
        strcpy(city[i+1],temp);
            }
        
    }
    printf("Arrays after sorting :\n");
    for(i=0;i<4;i++)
    {
       puts(city[i]);
       printf("\n");



}
}