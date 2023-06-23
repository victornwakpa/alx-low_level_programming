#include "main.h"
/**
 * print_line - function of this program
 * Description: A function that prints a straight line
 * @n: the return value
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
