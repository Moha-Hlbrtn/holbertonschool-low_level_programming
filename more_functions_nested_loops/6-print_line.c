#include "main.h"

/**
 * print_line - print the character _ n times to draw a line
 *
 * @n: the number of times the character should be printed
 *
 * return: no return as it is void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
