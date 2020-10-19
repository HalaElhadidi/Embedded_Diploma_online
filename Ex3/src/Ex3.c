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
void reverse (void)
{
	char x;

	scanf("%c",&x);
	if (x != '\n')
	{
		reverse();
		printf("%c",x);
	}
}
int main(void) {
	printf("enter sentence");
	fflush(stdout);
	reverse();
	return 0;
}

