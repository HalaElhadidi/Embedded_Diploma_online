/*
 ============================================================================
 Name        : Ex-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define max_num 10
struct student
{
	int roll;
	char name[max_num];
	int mark;
};
int i;
void data (void)
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
	   scanf("%s",info[i].name);
	   printf("student marks");
	   	    fflush(stdout);
	   		scanf("%d",&info[i].mark);

	}
	for (i=0;i<max_num;i++)
printf("student roll: %d\n student name: %s student mark \n %d",
		info[i].roll,
		info[i].name,
		info[i].mark);
}
void print (struct student info[])
{

}
int main(void) {

     data();


	return 0;
}
