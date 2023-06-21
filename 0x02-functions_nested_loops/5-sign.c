#include <stdio.h>
#include "main.h"
/**
 * print_sign - main function
 * Description: A function that print the sign of a number
 * @n: the interger
 * Return: return values are 1, 0, -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		putchar('1');
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	return (0);
}
