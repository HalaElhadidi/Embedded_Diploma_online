/*
 ============================================================================
 Name        : Ex_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
#define area(radius) (pi*radius*radius)
int main(void) {
	int rad;
	float area;
	printf("enter the radius");
	fflush (stdout);
	scanf("%d",&rad);
	area = area(rad);
	printf("area of circle= %f",area);

	return 0;
}
