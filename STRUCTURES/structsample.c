//to demonstrate the structures 
#include<stdio.h>
struct student
{
    int id;
    char name[20];
    float marks;
};
void main()
{
    struct student s1={30,"Bunny",100};
    struct student s2;
    printf("Enter the details of student 2 name ,id,marks :\n");
    scanf("%s %d %f",s2.name,&s2.id,&s2.marks);
    printf("details of first student :\n");
    printf("ID : %d \nNAME :%s\nMARKS:%.2f\n",s1.id,s1.name,s1.marks);
    printf("details of second student :\n");
    printf("ID : %d \nNAME :%s\nMARKS:%.2f\n",s2.id,s2.name,s2.marks);
}