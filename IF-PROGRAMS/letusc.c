#include<stdio.h>
#define condition
int main()
{
    int a;
    float x;
    a=12;
    x=12.0;
    if(a==x)
        printf("C is wow\n");//prints this 
    else
    {
        printf("Cis head ache \n");
    }
  
//ANOTHER PROBLEM
   if('X'<'x')
        printf("Ascii value of x is smaller than capital X \n");//printed this one to screen
    else
    {
        printf("Cis head ache \n");
    }
    int i=-4,j,num,k;
    j=(num<0?0:num*num);	
    printf("The j value is %d\n",j);
   k=(i<0?printf("less\n"):printf("More\n"));	

/*void condition(){
	int i=-4,j,num;
         j=(num<0?0:num*num);
         k=(i<0?printf("less\n");:printf("More\n"););	
	printf("The j value is %d\n",j)*/

}
