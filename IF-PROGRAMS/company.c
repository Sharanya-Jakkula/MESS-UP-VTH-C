//TO IMPLEMENT A COMPANY'S POLICY
#include<stdio.h>
void main()
{
    int o,s=10000,c,ok;
    ok=o*10;
    //o-order,s-stock,c-credit
    printf("Enter the order :");
    scanf("%d",&o);
    printf("Enter the desired credit :");
    scanf("%d",&c);
    if(o<=s&&c>ok)
        printf("YOUR REQUIREMENT WILL BE SUPPLIED SOON\n");
    else if(o<=s&&c<=ok)
       { printf("Please do check the credit \n ");
         printf("We are not satisfied \n ");      
       }
     else if(o>s&&c>=ok)
     {
     printf("YOUR REQUIREMENT OF %d WILL BE SHIPPED NOW \n",s);
     printf("The remaining %d will be shipped later... \n ",o-s); 
     }
}
