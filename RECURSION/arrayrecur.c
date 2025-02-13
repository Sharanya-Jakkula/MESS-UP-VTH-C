//to print the reverse of an array using recursion
#include <stdio.h>
int array(int[],int n);
void main(){
    int n,i;
    printf("Enter the number of elements in an array :\n ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of an array :\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
printf("\n");
printf("The elements of the array are :\n");
    array(a,n-1);
}
int array(int a[],int n)
{
    if (n==0)
    {
        printf("%d\n",a[n]);
    }
   else{
   	array(a,n-1);
   	printf("%d\n",a[n]);
   
   }
    


}
