/*
 ============================================================================
 Name        : Ex_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct SDist
{
	int feet;
	float inch;
}d1,d2,sum;
int main(void) {

	printf("enter 1st dist \n fisrt enter feet");
	fflush(stdout);
	scanf("%d",&d1.feet);
	printf("enter inch");
	fflush(stdout);
	scanf("%f",&d1.inch);
	printf("enter 2nd dist \n fisrt enter feet");
	fflush(stdout);
	scanf("%d",&d2.feet);
	printf("enter inch");
	fflush(stdout);
	scanf("%f",&d2.inch);
	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;
	if (sum.inch>=12.0)
	{
		sum.inch -= 12.0;
		sum.feet++;
	}
	printf ("sum of distance = %f' %d\" ",sum.inch,sum.feet);
	return 0;
}
