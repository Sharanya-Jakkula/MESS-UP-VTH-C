//Returning a structure from a function
#include<stdio.h>
struct wage{
char name[50];
long int rs;
};
struct wage employee();
int main()
{
struct wage e;
e = employee();
printf("\nWage details of the employee\n");
printf("Name : %s",e.name);
printf("\nWage : %ld\n",e.rs);
return 0;
}
struct wage employee()
{
struct wage e1;
printf("Enter the name of the employee : ");
scanf("%s",e1.name);
printf("\nEnter the wage : ");
scanf("%ld",&e1.rs);
return e1;
}