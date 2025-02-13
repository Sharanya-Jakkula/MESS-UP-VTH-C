//struct initailisation
#include<stdio.h>
//without tagname
struct
{
    int id;
    char name[20];
    float marks;
}s2,s1={30,"Bunny",100};
void main()
{
    printf("details of first student :\n");
    printf("ID : %d \nNAME :%s\nMARKS:%.2f\n",s1.id,s1.name,s1.marks);
}