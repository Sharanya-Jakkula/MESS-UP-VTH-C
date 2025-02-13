//to demonstrate the nested structures
//separate type
#include <stdio.h>
typedef struct student{
    int id;
    char name[20];
    float marks[3];
    float total;
}dummy;
struct address{
    int hno;
    char street[10];
    struct student info;
}infra;
void main()
{
    int i,sum=0;
    struct address add={21,"temple",23,"jin",100};
    printf("Enter the marks of three subjects:\n");
    for(i=0;i<3;i++)
    {
        scanf("%f",&add.info.marks[i]);
       // add.info.total+=add.info.marks[i];
       // printf("%f ",sum);
    }
    printf("H.No : %d\n",add.hno);
    printf("Street : %s\n",add.street);
    printf("Student ID : %d\n",add.info.id);
    printf("NAME : %s\n",add.info.name);
    //printf("Marks : %.2f\n",add.info.marks[0]);
    printf("marks obtained is \n");
      for(i=0;i<3;i++)
    {
        printf("%.2f\n",add.info.marks[i]);
       // add.info.total+=add.info.marks[i];
       // printf("%f ",sum);
    }





   





}