#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 * Return: nothing as it's void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
