/*
 ============================================================================
 Name        : Ex_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
union job
{
	char num [32];
	float salary;
	int worker_no;
}u;
struct job1
{
	char name [32];
	float salary;
	int worker_no;
}s;
int main(void) {
	printf("size of structure %d",sizeof(u));

	printf("size of structure %d",sizeof(s));
	return 0;
}
