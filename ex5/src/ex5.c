/*
 ============================================================================
 Name        : ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("enter char");
	fflush(stdout);
	scanf("%c",&x);
	if (('a' <= x & x<= 'z') || ('A' <= x & x<= 'Z'))
	{
		printf ("char is alphapet");
	}
	else
		printf("char is not alphapet");

	return 0;
}
