#include "main.h"

/**
 * print_alphabet - Imprime l'alphabet en lowercase
 * Return: No return as it is void
 */
void print_alphabet(void)
{
	char print_alphabet;

	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
	{
		_putchar(print_alphabet);
	}
	_putchar('\n');
}
