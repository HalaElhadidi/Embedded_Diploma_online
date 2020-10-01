/*
 ============================================================================
 Name        : ex_8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char operation;
	float first_operand , second_operand;
	float result;
		printf ("enter operation");
		fflush(stdout);
		scanf("%c",&operation);
		printf ("enter two operands");
		fflush(stdout);
		scanf("%f %f",&first_operand,&second_operand);
	    switch(operation)
	    {
	    case '+':
	    	result =  first_operand + second_operand;
	    	printf("%f + %f = %f" , first_operand , second_operand ,result);
	    	break;
	    case '-':
	    	result =  first_operand - second_operand;
	    	printf("%f - %f = %f",first_operand , second_operand , result);
	    	break;
	    case '*':
	    	result =  first_operand * second_operand;
	    	printf("%f * %f = %f", first_operand , second_operand,result);
	    	break;
	    case '/':
	    	result =  first_operand / second_operand;
	    	printf("%f / %f = %f", first_operand , second_operand,result);
	    	break;

	    default:
	    	printf("error!!! and try again");
	    }
	return 0;
}
