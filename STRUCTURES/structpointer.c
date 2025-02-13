//to demonstrate the structure pointer
#include <stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};
void main()
{   struct student s={1,"bunny",100};
    struct student *ptr=&s;
    printf("Roll no is %d\n",s.rollno);//1
    printf("Roll no is %d\n",ptr->rollno);//1
    printf("Roll no is %d\n",(*ptr).rollno);//1





}