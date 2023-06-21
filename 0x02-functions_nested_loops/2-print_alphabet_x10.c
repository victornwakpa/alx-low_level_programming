#include "main.h"

/**
 * print_alphabet_x10 - main function of this program
 * Description: This program will display the alphabet x10
 */

void print_alphabet_x10(void)
{
	char alphabet_x10;
	int counter = 0;

	alphabet_x10 = 'a';

	while (counter < 10)
	{
		int i;

		for (i = 0; i < 26; i++)
		{
			_putchar(alphabet_x10);
			alphabet_x10++;
		}
		counter++;
	}
	_putchar('\n');
}
