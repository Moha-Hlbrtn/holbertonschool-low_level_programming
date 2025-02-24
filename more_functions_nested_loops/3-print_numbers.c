#include "main.h"

/**
 * print_numbers - has no parameter and prints the numbers entre 0 & 9
 *
 * return: nothing as it is void, so it has no argument
 */
void print_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		_putchar(numbers + '0');
	}
	_putchar('\n');
}
