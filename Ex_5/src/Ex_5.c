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
struct data
{
	char *emp_name;
	int emp_id;
};
int main(void) {
	struct data emp1={"john",123},emp2={"alex",456},emp3={"Bob",789};
	struct data *arr[]={&emp1,&emp2,&emp3};
	struct data (*(*ptr)[3])=&arr;
	printf ("%s ",(**(*ptr+1)).emp_name);
	printf ("%d ",(**(*ptr+1)).emp_id);
	return 0;
}
