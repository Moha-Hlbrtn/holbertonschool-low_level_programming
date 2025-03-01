#include "main.h"

/**
 * print_number - prints an integer with putchar function
 * @n: the integer parameter to be printed
 *
 */
void print_number(int n)
{
	int divisor = 1;

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		_putchar('8');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divisor >= 10)
		divisor *= 10;
	while (divisor > 0)
	{
		_putchar((n / divisor) % 10 + '0');
		n %= divisor;
		divisor /= 10;
	}
}
