#include "main.h"
/**
 * _isalpha - the main function
 * Description: A program that checks if a letter is uppercase or lowercase
 * @c: the character been discussed
 * Return: 1 if successful and  0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
