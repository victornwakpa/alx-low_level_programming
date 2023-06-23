#include "main.h"
/**
 * _isdigit - Checks if a character is a number
 * @c: The character to be checked
 * Return: returns 1 if the character is a digit, otherwise 0
 */
int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
