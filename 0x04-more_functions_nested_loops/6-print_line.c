#include "main.h"
/**
 * print_line - function of this program
 * Description: A function that prints a straight line
 * @line: the return value
 */

void print_line(int line)
{
	if (line <= 0)
	{
		_putchar('\n');
	}
	int i = 0;

	while (i < line)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
