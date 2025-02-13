//USING SWITCH IN IF STATEMENT
#include<stdio.h>
void main(){
    int a,net,am,d;
    char type;
    printf("Enter the total amount :\n");
    scanf("%d",&a);
    printf("Enter the type of the cloth (mill-m , handloom-h)");
    scanf("\n%c",&type);
    am=a/100;
    if(type=='m')
    {
        switch(am)
        {
            case(0):
                d=0;
                net=a-d;
                printf("Net amount = %d",net);
                break;
            case(1):
                d=a*5/100;
                net=a-d;
                printf("Net amount = %d",net);
                break;
            case(2):
                d=a*7.5/100;
                net=a-d;
                printf("Net amount = %d",net);
                break;
            case(3):
                d=a*10.0/100;
                net=a-d;
                printf("Net amount = %d",net);
                break;
            default:
                printf("SORRY\n");
        }
    }
    else if(type='h')
        {
            switch(am)
        {
            case(0):
                d=a*5/100;
                net=a-d;
                printf("Net amount = %d",net);
                break;
            case(1):
                d=a*7.5/100;
                net=a-d;
                printf("Net amount = %d",net);
                break;
            case(2):
                d=a*10.0/100;
                net=a-d;
                printf("Net amount = %d",net);
                break;
            case(3):
                d=a*15.0/100;
                net=a-d;
                printf("Net amount = %d",net);
                break;
            default:
                printf("SORRY\n");
        }
        }
        else
        printf("Enter as suggested\n");
    }