//TO FIND THE ROOTS OF A QUADRATIC EQUATION
#include <math.h>
#include<stdio.h>

void main(){
    float a,b,c;
    double del;
    printf("Enter the values of a,b,c respectively :\n");
    scanf("%f %f %f",&a,&b,&c);
    del=b*b-(4*a*c);
    printf("%lf ",del);
    if(del>0)
    {
        printf("ROOTS : %lf + %lf , %lf-%lf  \n",-b/(2*a),sqrt(del)/(2*a),-b/	(2*a),sqrt(del)/(2*a));
    }
    else if(del==0)
    {
        printf("Equal roots : %f\n" ,-b/(2*a));
    }
    else{
        printf("ROOTS : %lf + i%lf , %lf-i%lf  \n",-b/(2*a),sqrt(del)/(2*a),-b/(2*a),sqrt(del)/(2*a));
    }
}
