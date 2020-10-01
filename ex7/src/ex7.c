/*
 ============================================================================
 Name        : ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x , y;
	printf ("enter two numbers");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Before swapping %d %d \n",x,y);
    x = x^y;
    y = x^y;
    x = x^y;
    printf("After swapping %d %d",x,y);
	return 0;
}

/* another method
x = x - y;
y = x + y;
x = y - x;
*/
