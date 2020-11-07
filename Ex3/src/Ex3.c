/*
 ============================================================================
 Name        : Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define max_size 20
int main(void) {
char x[max_size],i,*ptr,j;
printf("input a string");
fflush(stdout);
scanf("%s",x);
for (i=0 ; i<=max_size;i++)
	if (x[i]=='\0')
	{
		ptr = &x[i-1];
		j=i-1;
		break;

	}
for (i=0 ; i<=j;i++)
{
printf("%c",*ptr);
ptr--;
}
	return 0;
}
