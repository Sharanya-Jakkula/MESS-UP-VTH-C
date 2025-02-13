//to demonstrate the selection sort
#include<stdio.h>
void main()
{
int a[50],i,j,temp,n,min;
printf("enter no of elements in the list:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("a[%d] = ",i);
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
min=i;
for (j=i+1;j<n;j++)
{
if (a[j]<a[min])
min=j;
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
printf("\nsorted list=");
for (i=0;i<n;i++)
printf("\t%d",a[i]);
printf("\n");
}
