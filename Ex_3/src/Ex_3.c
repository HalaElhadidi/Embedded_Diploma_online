/*
 ============================================================================
 Name        : Ex_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y;
	int sum =0 ;
	printf("enter two numbers\t");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d",&x,&y);
	sum = x+y;
	printf("sum: %d",sum);
	return 0;
}
