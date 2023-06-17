#include <stdio.h>

/**
 * main - This will contain the code to be executed
 *
 * Return: This will return 0 if successfully, and 1 if not successfully
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
		putchar(letter);
	putchar('\n');

	return (0);
}
