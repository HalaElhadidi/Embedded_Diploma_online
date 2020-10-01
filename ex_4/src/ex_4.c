/*
 ============================================================================
 Name        : ex_4.c
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
float product;
printf("enter two numbers");
fflush(stdout);

scanf("%f %f",&x,&y);
product = x* y;
printf("product: %f",product);
}
