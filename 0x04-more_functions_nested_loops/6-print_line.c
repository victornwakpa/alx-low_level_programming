#include "main.h"
/**
 * print_line - function of this program
 * Description: A function that prints a straight line
 * @n: the return value
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
