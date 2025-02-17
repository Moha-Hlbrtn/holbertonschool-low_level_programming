#include <stdio.h>

/**
 * main - Entry point
 * Description: Print without "e" nor "q"
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
		{
		putchar(i);
		}
		i++;
	}

	putchar('\n');

	return (0);
}
