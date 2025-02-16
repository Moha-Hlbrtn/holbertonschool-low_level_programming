#include <stdio.h>

/**
 * main - Entry point
 * Description: Print alphabet with a boucle
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

	putchar('\n');

	return (0);
}

