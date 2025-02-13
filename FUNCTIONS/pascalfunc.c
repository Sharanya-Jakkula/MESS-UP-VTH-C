//to print pascal triangle using function
#include <stdio.h>
//int factorial(int n);
//void main(){
int factorial(int n)
{
    int f=1,i=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    return f;
}
int ncr(int n,int r)
{
    int result;
    result=factorial(n)/factorial(n-r)*factorial(n);
    return result;
}
void main(){
    int n,i=1,j;
    printf("\nEnter number of rows :\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%*d",(n+1-i)*3,ncr(i-1,0));
        j=2;
        while(j<=i)
        {
            printf("%d",6,ncr(i-1,j-1));
            j++;
        }
        printf("\n");
        i++;

    }
}





