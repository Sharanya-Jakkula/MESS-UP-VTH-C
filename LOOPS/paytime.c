//TO CALCULATE OVERTIME PAY OF WORKERS
#include <stdio.h>
void main(){
    int i=1;
 while (i<=10)
 {
        int hour;
        printf("Enter the no. of working hours :\n");
        scanf("%d",&hour);
        if((hour-40)>0)
             {
            printf("Overtime pay is %d\n",12*hour);
        }
    i++;
 }




}


