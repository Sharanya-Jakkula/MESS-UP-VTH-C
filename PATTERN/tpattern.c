//to print the exam pattern
#include<stdio.h>
void main(){
    int i,j,k,l=0,s=0,den=-4,temp=2,dum=0;
    for(i=0;i<7;i++)
    {
        dum=den;
        temp=i-1;
        for(j=6;j>=i;j--)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            if(k==0||k==i)
                printf("1 ");
            else if(k==1)
            {
                printf("%d ",s);
                l=s;
                s++;
            }
            else
            {
                l=l*temp+den;
                printf("%d ",l);
                den-=2;
                temp--;
            }
        }
        den=dum;
        den+=2;
        printf("\n");
    }


}
