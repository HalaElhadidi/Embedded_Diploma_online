/*
 ============================================================================
 Name        : Ex_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct Sdata
{
	char m_name[20];
	int m_roll;
	int m_marks;
};
int main(void) {
	struct Sdata student;
	printf("enter student name");
	fflush (stdout);
	scanf("%s",student.m_name);
	printf("enter student roll");
	fflush (stdout);
	scanf("%d",&student.m_roll);
	printf("enter student marks");
	fflush (stdout);
	scanf("%d",&student.m_marks);
	printf("%s %d %d",student.m_name,student.m_roll,student.m_marks);
	return 0;
}
