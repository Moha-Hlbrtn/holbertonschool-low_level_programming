#include <stdio.h>

/**
 * main - Entry point
 * Description: Print alphabet in lowercase with a boucle then uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	i = 'A';

	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
