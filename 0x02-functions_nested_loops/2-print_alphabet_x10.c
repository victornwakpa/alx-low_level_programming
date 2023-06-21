#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - main function of this program
 * Description: This program will display the alphabet x10
 */

void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		char alphabet_x10 = 'a';
		while (alphabet_x10 <= 'z')
		{
			putchar(alphabet_x10);
			alphabet_x10++;
		}
		putchar('\n');
		counter++;
	}
}
