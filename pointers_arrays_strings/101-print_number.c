#include "main.h"

/**
 * print_number - prints an integer with putchar function
 * @n: the integer parameter to be printed
 *
 */
void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		_putchar((n / divisor) % 10 + '0');
		n %= divisor;
		divisor /= 10;
	}
}
