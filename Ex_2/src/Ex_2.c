/*
 ============================================================================
 Name        : Ex_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial (int y)
{
    if (y == 0)
    {
    	return 1;
    }
    else
    	return (y * factorial(y-1));
}
int main(void) {
	int x ;
	printf("enter num");
	fflush(stdout);
	scanf("%d",&x);
	printf("%d",factorial (x));
	return 0;
}
