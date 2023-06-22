#include <stdio.h>
#include "main.h"
/**
 * print_numbers - function for the program
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
}
