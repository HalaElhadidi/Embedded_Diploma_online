/*
 ============================================================================
 Name        : ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x ;
 printf ("enter checked number");
 fflush(stdout);
 scanf("%d",&x);
 if (x % 2 == 0)
 {
	 printf("your num is even");
 }
 else
	 printf("your num is odd");
	return 0;
}
