#include "main.h"
/**
 * _islower - Check function
 * Description: This program _islower checks if a letter is lowercase or not
 * @c: letter to be checked
 * Return: 1 if lowercase and 0 if otherwise
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
