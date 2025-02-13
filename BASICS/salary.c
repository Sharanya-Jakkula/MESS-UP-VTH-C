//TO COMPUTE THE GROSS SALARY
#include<stdio.h>
int main()
{
    float basic,da,hra;
    float gross;
    printf("Enter the basic salary:\n");
    scanf("%f",&basic);
    da=(basic*40)/100;
    hra=(basic*20)/100;
    gross=basic+hra+da;
    printf("The gross salary is %.2f rupees\n",gross);
    return 0;
}