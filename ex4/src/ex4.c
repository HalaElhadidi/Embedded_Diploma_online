/*
 ============================================================================
 Name        : ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x;
	printf("enter num");
	fflush(stdout);
	scanf("%f",&x);
    if (x != 0)
    {
    	x=(char)x&0b10000000;
     if (x == 0)
    	printf("+ve");
    else if (x > 0)
    	printf("-ve");
    }
    else
    	printf("zero");
	return 0;
}

