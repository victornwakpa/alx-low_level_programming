#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the numbers from 1 to 100 according
 * to the FizzBuzz rules
 * Each number or word is separated by a space
 * Multiples of three are replaced with "Fizz"
 * Multiples of five are replaced with "Buzz"
 * Multiples of both three and five are replaced with "FizzBuzz"
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	printf("\n");

	return (0);
}

