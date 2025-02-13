#include<stdio.h>
void main(){
    int num,cp=0,cn=0,cz=0,ch;
    do{
        printf("Enter the number : \n");
        scanf("%d",&num);
        if(num>0)
            cp++;
        else if (num==0)
        {
            cz++;
        }
        else
            cn++;
    printf("Enter your choice (y=1 , n=0): \n");
    scanf("%d",&ch);
    }while (ch==1);
    printf("POSITIVE NUMBERS : %d\n NEGATIVE  NUMBERS : %d\n ZEROES : %d\n",cp,cn,cz);


    }

