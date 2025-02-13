//SOLUTIONS TO THE EXERCISE PROBLEMS OF LET US C
//TO CALCULATE PROFIT OR LOSS INCURRED 
#include<stdio.h>
int main()
{
    float cost,sell;
    printf("Enter the cost and selling price :\n");
    scanf("%f %f",&cost,&sell);
    if(cost>sell)
        printf("YOU ARE IN LOSS OF %.2f rupees\n",cost-sell);
    else
       printf("YOU ARE IN PROFIT OF %.2f rupees\n",sell-cost);
}
//---------------------------------------


 
