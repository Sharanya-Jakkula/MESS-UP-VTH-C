//TO CONVERT RGB COLOUR INTO CMYK
#include<stdio.h>
void main(){
	int r,g,b;
	float w,c,m,y,black;
	printf("Enter the RGB values respectively : ");
	scanf("%d %d %d",&r,&g,&b);
	//WHITE
	//w=(r/255,g/255,b/255)
	float R,G,B,max;
	R=r/255;
	G=g/255;
	B=b/255;
	max=R;
	max=(R>G?R:G);
	max=(G>B?G:B);
	max=(B>R?B:R);
	w=max;
	printf("The white colour is %.2f\n",max);
	//CYAN
	c=((w-r)/255)/w;
	//Magenta
	m=((w-g)/255)/w;
	//YELLOW
	y=((w-b)/255)/w;
	//BLACK
	black=1-w;
	printf("_____________________________________________-\n");
	printf("\n");
	printf("Get into the joy of colours ...\n");
	printf("The RGB colours (%d ,%d ,%d)  in CMYK is (%.2f,%.2f,%.2f,%.2f)\n ",r,g,b,c,m,y,black);
	



} 
