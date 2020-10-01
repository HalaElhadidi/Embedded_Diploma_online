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
    float x , y;
    float temp;
    printf("enter two float numbers");
    fflush(stdout);
    scanf("%f %f",&x,&y);
    printf("Before swapping \n %f %f",x,y);
    temp = x;
    x=y;
    y=temp;
    printf("\n after swapping \n %f %f",x,y);
	return 0;
}
