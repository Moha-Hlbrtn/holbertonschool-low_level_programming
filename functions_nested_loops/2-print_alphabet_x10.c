#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 * Return: nothing as it's void
 */
void print_alphabet_x10(void)
{
	char print_alphabet_x10;

	for (print_alphabet_x10 = 'a'; print_alphabet_x10 < 'z'; print_alphabet_x10++)
	{
		_putchar((print_alphabet_x10) * 10);
	}
	_putchar('\n');
}
