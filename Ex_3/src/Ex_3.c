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

struct complex
{
	float real;
	float img;
}d1,d2,sum;
int main(void) {
	printf("enter first num real part");
	fflush (stdout);
	scanf("%f",&d1.real);
	printf("enter first num img part");
	fflush (stdout);
	scanf("%f",&d1.img);
	printf("enter second num real part");
	fflush (stdout);
	scanf("%f",&d2.real);
	printf("enter second num img part");
	fflush (stdout);
	scanf("%f",&d2.img);
	sum.real = d1.real + d2.real;
	sum.img  = d1.img + d2.img ;
	printf("%f + %f i",sum.real,sum.img );
	return 0;
}
