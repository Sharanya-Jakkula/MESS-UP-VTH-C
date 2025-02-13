//TO Demonstrate the function of an array 
#include<stdio.h>
void main(){
    int st[6],i=0;
    //printf("Enter the marks :\n");
        for(i=0;i<6;i++)
        {
            printf("Enter the marks%d :\n",i+1);
            scanf("%d",&st[i]);
        }
    for(i=0;i<6;i++)
    {
        printf("Marks%d = %d\n ",i+1,st[i]);
    }
}
