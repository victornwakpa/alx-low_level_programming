#include "main.h"

/**
 * swap_int - function for the program
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
