/*
 ============================================================================
 Name        : ex_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x ,i , sum=0;
	printf ("enter num");
	fflush(stdout);
	scanf("%d",&x);
	for (i=x;i>=0;i--)
		{
		sum = sum + x;
        x--;
		}
	printf("sum: %d",sum);
	return 0;
}
