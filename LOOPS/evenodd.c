//TO PRINT THE EVEN NUMBERS AND ODD NUMBERS
#include<stdio.h>
void main(){
    int i=1;
    printf("USING WHILE LOOP: EVEN NUMBERS\n");
    printf("-----------------\n");
    while (i<=10)
    {
        if (i%2==0)
            {
             printf("%d\n",i);
            }
        
        i=i+1;
    }
    printf("USING WHILE LOOP: ODD NUMBERS\n");
    printf("-----------------\n");
    i=1;
    while (i<=10)
    {
        if (i%2!=0)
             printf("%d\n",i);
        i=i+1;
    }
    //FOR LOOP
    printf("USING FOR LOOP - EVEN NUMBERS\n");
    printf("-----------------\n");
    for ( i = 1; i <= 10; i++)
    {
        if(i%2==0)
            {
                printf("%d \n",i);
            }
        
    }

    printf("USING FOR LOOP - EVEN NUMBERS\n");
    printf("-----------------\n");
    for ( i = 1; i <= 10; i++)
    {
        if(i%2!=0)
            {
                printf("%d \n",i);
            }
        
    }

}