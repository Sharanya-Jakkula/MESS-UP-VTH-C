//to demonstrate the function of type def
#include<stdio.h>
typedef struct student 
{
	int rollno;
	char name[60];
	float marks;
	
}student;
void main(){
	student s={1,"BUNNY",100};
	printf("ID:%d\nNAME :%s\nMARKS:%f\n",s.rollno,s.name,s.marks);

}
//notes
//typedef is used to create a synonym for the existing structure datatype
