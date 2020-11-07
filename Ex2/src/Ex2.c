/*
 ============================================================================
 Name        : Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x ='A',i;
	char *ptr = &x;
	printf("The Alphabets are :");
	for (i=0;*ptr != 'Z';i++)
	{printf(" %c ",*ptr);
	(*ptr)++;}
	return 0;
}
