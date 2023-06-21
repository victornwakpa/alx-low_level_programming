#include "main.h"

/**
 * print_alphabet - this is the main functions
 * Description: This functions print alphabet from a to z
 */

void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
