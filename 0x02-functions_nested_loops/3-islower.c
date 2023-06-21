#include "main.h"
/**
 * _islower - The main function for this program
 * Description: This program checks if a letter is lowercase or not
 * return: 1 if lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
