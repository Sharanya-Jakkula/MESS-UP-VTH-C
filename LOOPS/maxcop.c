//TO COMPUTE MAXIMUM OF FIVE NUMBERS USING CONDITIONAL OPERATORS
#include<stdio.h>
void main(){
    int num,max=0,i=0;
    for(i=0;i<5;i++)
    {
        printf("Enter the number : \n");
        scanf("%d",&num);
        max=(num>max?num:max);

    }
    printf("Maximum of all numbers  = %d \n",max);
}