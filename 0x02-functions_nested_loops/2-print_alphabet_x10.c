#include "main.h"

/**
 * print_alphabet_x10 - main function of this program
 * Description: This program will display the alphabet x10
 */

void print_alphabet_x10(void)
{
	char alphabet_x10;
	int counter = 0;

	while (counter < 10)
	{
		int letter;

		for (letter = 0; letter < 26; letter++)
		{
			_putchar(alphabet_x10);
			alphabet_x10;
		}
	}
	_putchar('\n');
}
