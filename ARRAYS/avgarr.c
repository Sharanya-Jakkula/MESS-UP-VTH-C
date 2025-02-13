//TO DEMONSTRATE THE FUNCTIONING OF AN ARRAY
#include<stdio.h>
void main(){
    int arr[10],i;
    float sum=0;
    printf("Enter the marks of ten students :\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
for(i=0;i<=9;i++)
    {
        sum=sum+arr[i] ;
        }
printf("Average marks of ten students is : %.2f\n",sum/10);


}