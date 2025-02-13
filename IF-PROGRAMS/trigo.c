//TO CHECK THE ANGLE SUM
#include<math.h>
#include<stdio.h>
int main(){
    float t,res;
    float v;
    float a;
    printf("Enter the angle in degrees:\n");
    scanf("%f",&a);
    t=sin(a);
    v=cos(a);
    if((t*t)+(v*v)==1)
    	printf("The angle sum is equal to one \n");
    else
    	printf("Not equal to one \n");
    return 0;
}

