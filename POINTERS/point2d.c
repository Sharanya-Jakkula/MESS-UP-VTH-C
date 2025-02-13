//to demonstrate the point to 2d array
#include <stdio.h>
void main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9},i,j,**p,k;
    p=&a;
    printf("The elements are :\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    k=*(p+2)+2;
    printf("k=%d\n",k);
    printf("p=address=%d\n",p);//same
    printf("&a=address=%d\n",&a);//same
    printf("a=address=%d\n",a);//same
    printf("a[0]=address=%d\n",a[0]);//same
    printf("&a[0][0]=address=%d\n",&a[0][0]);//same
    printf("a[1][2]=%d\n",*(*(p+1)+1));



}
