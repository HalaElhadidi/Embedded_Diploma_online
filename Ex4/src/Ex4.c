/*
 ============================================================================
 Name        : Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define max_size 15
int main(void) {
	char x [max_size],i,*ptr;
	ptr = x;
	printf("Input 5 number of elements in the array :");
	fflush(stdout);
	for (i=0;i<=4;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
     ptr--;
	for (i=0;i<=4;i++)
	{

		printf("%d",*ptr);
        ptr--;
	}
	return 0;
}
