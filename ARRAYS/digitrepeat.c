//to check whether a digt is repeated in a number 
#include <stdio.h>
void main(){
    int num,i,a[10]={0},indicator=0,rem=0;
    printf("Enter the number :\n");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        if(a[rem]==1)
        {
            indicator=1;
            break;
        }
        a[rem]=1;
        num=num/10;
    }
    if(indicator==0)
        printf("No repeated digits found ...\n");
    else
    {
        printf("Yes\n");
    }

}