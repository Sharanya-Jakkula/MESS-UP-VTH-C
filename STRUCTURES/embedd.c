//to demonstrate the functioning of embedded nested structure
#include <stdio.h>
#include <string.h>
struct Employee
{
int id;
char name[20];
struct Date
{
int dd;
int mm;
int yyyy;
}doj;
}e1;
int main( )
{
//storing emmployee information
e1.id=101;
strcpy(e1.name, "Bunny Jakkula");//copying string into char ar
e1.doj.dd=3;
e1.doj.mm=3;
e1.doj.yyyy=2005;
//printing first employee information
printf( "employee id : %d\n", e1.id);
printf( "employee name : %s\n", e1.name);
printf( "employee date of joining (dd/mm/yyyy) : %d/%d/%d\n", e1.doj.dd,e1.doj.mm,e1.doj.yyyy);
return 0;
}