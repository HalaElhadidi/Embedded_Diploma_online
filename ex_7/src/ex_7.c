/*
 ============================================================================
 Name        : ex_7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x ,i , fact=1;
		printf ("enter num");
		fflush(stdout);
		scanf("%d",&x);
		if (x >= 0)
		{
			for (i=x;i>=1;i--)
		{
			fact = fact * x;
			x--;
		}
		printf("factorial= %d",fact);
		}
		else if (x < 0)
		{
			printf("error!!!factorial isn't exist");
		}

	return 0;
}
