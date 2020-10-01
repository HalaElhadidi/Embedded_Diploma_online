/*
 ============================================================================
 Name        : ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("enter char ");
	fflush(stdout);
	scanf("%c",&x);
	if (x== 'a' || x=='A' || x=='e' || x== 'E' || x=='o' || x=='O' || x=='i' || x=='I' || x=='u' || x=='U')
	{
		printf ("char is vowel");
	}
	else
		printf("char is cosonent");
	return 0;
}
