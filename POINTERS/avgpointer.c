//to calculate the average using the pointer 
#include <stdio.h>
float avg(int ar[],int size);
void main(){
    int x[100],k,n,i,*p;
    printf("Enter the size of an array :\n");
    scanf("%d",&n);
    printf("Enter the elements of an array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    p=*x[0];//address of p
    printf("p=%d\n",p);
    printf("The average marks are : %.2f\n",avg(x,n));
}
float avg(int ar[],int size)
{
int *p,i,sum=0;
p=ar;//address of ar
//printf("p=%d\n",p);
for(i=0;i<size;i++)
{
    sum=sum+*(p+i);
}
printf("sum=%d\n",sum);
return ((float)sum/size);
}