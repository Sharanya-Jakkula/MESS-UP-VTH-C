//TO check who is younger 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the ages of ram ,shyam and ajay :\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a<b)&&(a<c))
       printf("Ram is younger among the three\n");
    else if((c<a)&&(c<b))
    	printf("Ajay is younger among the three \n");
    else
        printf("Shyam is younger among the three\n");
}
//---------------------------------------
