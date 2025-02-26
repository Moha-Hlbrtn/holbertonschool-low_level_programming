#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed by half
 *
 * Return: nothing as it is void
 */
void puts_half(char *str)
{
	int len = 0;
	int n, i;

	while (str[len] != '\0')
	{
		len++;
	}

	n = (len + 1) / 2;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
