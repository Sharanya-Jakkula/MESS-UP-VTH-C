//to demonstrate the insertion sort 
#include<stdio.h>
void main()
{
int a[50],i,j,temp,n;
printf("enter no of elements needed to sort:");
scanf("%d",&n);
for (i=0;i<n;i++){
printf("a[%d] = ",i);
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(temp<a[j])
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
printf("\nsorted list=");
for(i=0;i<n;i++)
printf("\t%d",a[i]);
printf("\n");
}