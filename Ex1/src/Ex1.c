/*
 ============================================================================
 Name        : Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m ;
	m = 29;
	printf("address of m :  %x \n value of m %d",&m,m);
	int *ap = &m;
	printf("\naddress of pointer ap:  %x \n pointer content:  %d \n",ap,*ap);
	m = 34;
	printf("address of m :  %x \n value of m %d",&m,m);
	*ap = 7;
	printf("\naddress of pointer ap:  %x \n pointer content:  %d \n",ap,*ap);
	return 0;
}
