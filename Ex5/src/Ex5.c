/*
 ============================================================================
 Name        : Ex5.c
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
		char *Employee_Name;
		int Employee_ID;
	};
int main(void) {

	struct data   employee1 = {"john",456};
	struct data   employee2 = {"alex",123};
	struct data   employee3 = {"BoB" ,789};
	struct data   (*arr[])={&employee1,&employee2,&employee3};
	struct data   (*(*ptr)[3])=&arr;
	printf ("%s \t",(**(*ptr+1)).Employee_Name);
	printf ("%d",(**(*ptr+1)).Employee_ID);
	return 0;
}
