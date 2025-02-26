#include "main.h"

/**
 * puts2 - prints every other character of a string, start with 1st one
 * @str: the string of which the characters have to be printed
 * Return: nothing as it is void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
