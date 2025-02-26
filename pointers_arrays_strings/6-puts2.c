#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string, start with 1st one
 * @str: the string to be printed
 * Return: nothing as it is void
 */
void puts2(char *str)
{
	int i = 0;
	int len = _strlen(str);

	while (i < len)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
