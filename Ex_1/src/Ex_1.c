/*
 ============================================================================
 Name        : Ex_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int prime_num (int x)
{int i,flag=0;
	for(i=x-1;i>1;i--)
	{
		if((x%i)==0)
		{
			flag = 1;
		    break;
		}
	}
	return (flag);
}
int main(void) {
	int a , b ,j ,check;
	printf("enter two nums");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("%d %d",a,b);
	for (j=a;j<b;j++)
	{

		check = prime_num (j);
		if (check == 0)
			printf("\n %d",j);
	}

	return 0;
}
