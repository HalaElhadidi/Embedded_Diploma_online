/*
 ============================================================================
 Name        : Ex_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power (int x , int y)
{
	if (y==1)
		return x;
	else
	x = x * power(x,y-1);
	return x;
}
int main(void) {
	int x,y;
	printf("enter base and power");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("%d",power(x,y));
	return 0;
}
