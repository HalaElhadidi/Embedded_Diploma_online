/*
 ============================================================================
 Name        : Ex_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define max_num 3
struct student
{
	int roll;
	char name[max_num];
	int mark;
};
int i;
struct student data (void)
{

	struct student info[max_num] ;
	printf("enter student data");
	fflush (stdout);
	for (i=0;i<max_num;i++)
	{   printf(" roll number");
	    fflush(stdout);
		scanf("%d",&info[i].roll);
		printf("student name");
	     fflush(stdout);
	   scanf("%s",&info[i].name);
	   printf("student marks");
	   	    fflush(stdout);
	   		scanf("%d",&info[i].mark);

	}
	return info[i];
}
void print (struct student info[])
{

}
int main(void) {
	struct student student_data [max_num];
	for (i=0;i<max_num;i++)
	{
	student_data[i]=data();
	}
	for(i=0;i<max_num;i++)
	{
		printf("student roll:%d\n student name: %s student mark \n %d",student_data[i].roll,student_data[i].name,student_data[i].mark);
	}
	return 0;
}
