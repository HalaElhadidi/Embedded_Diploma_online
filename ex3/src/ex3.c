/*
 ============================================================================
 Name        : ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x , y , z;
	printf ("enter 3 numbers");
	fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if (x>y)
	{
		if (x>z)
			printf("%f is the largest",x);
	}
	else if (y>z)
	{
		printf("%f is the largest",y);
	}
	else
	printf("%f is the largest",z);
	return 0;
}

/* another method
 * if (x>y && x>z)
 * {
 * printf("%f is the largest",x);
 * }
 *else if (y>z && y>x)
 *{
 printf("%f is the largest",y);
 *}
 *else
 * printf("%f is the largest",z);
 *}
 *{
 *{
 *
 */

