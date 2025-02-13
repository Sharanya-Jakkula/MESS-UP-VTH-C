//to demonstrate the usage of structure array
#include<stdio.h>
struct student 
{
    /* data */
    int id;
    char name[20];
    float marks[30];
    float total;
};

void main(){
    struct student s[3];
  int i,j;
  printf("Enter the elements :\n");
  for(i=0;i<3;i++)
  {
    printf("Enter the details of element%d name ,id :\n",i+1);
    scanf("%s %d",s[i].name,&s[i].id);
    printf("Enter the marks :\n");
    int sum=0;
    for(j=0;j<3;j++)
    {
        scanf("%f",&s[i].marks[j]);
        sum=sum+s[i].marks[j];
    }
    s[i].total=sum;
  }
  printf("The elements are :\n");
   for(i=0;i<3;i++)
  {
    printf("Student%d :\n",i+1);
    printf("ID :%d\nNAME :%s\nTOTAL: %.2f\n",s[i].id,s[i].name,s[i].total);
   /* for(j=0;j<3;j++
    {
        printf("%.2f\n",s[i].marks[j]);
    }*/
    
  }
}