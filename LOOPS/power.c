//TO RAISE THE POWER OF A NUMBER 
#include <stdio.h>
void main(){
int a,b,p;
printf("Enter the first number :\n");
scanf("%d",&a);
printf("Enter the second  number :\n");
scanf("%d",&b);
p=1;
while(b>0)
{
    p=p*a;
    --b;
}
printf("The first number raised to the power of second number  is %d .\n",p);



}
