//TO CALCULARE  THE WIND CHILL FACTOR
#include<math.h>
#include<stdio.h>
//#include<math.h>
int main()
{
    float t,wcf;
    float v;
    float a;
    printf("Enter the temperature and the wind velocity:\n");
    scanf("%f %f",&t,&v);
    a=pow(v,0.16);
    //printf("%f\n",a);
    wcf=35.74+0.6215*t+(0.4275*t-35.75)*a;
    printf("The wind chill factor is %.f\n",wcf);
    return 0;
}
