#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_line(int n)
{
        int i = 0;

        while (i < n)
        {
                if (n <= 0)
                {
                        putchar('\n');
                }
                else
                {
                        putchar('_');
                }
                i++;
        }
	putchar('\n');
}

int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
