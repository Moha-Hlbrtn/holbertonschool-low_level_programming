#include <stdio.h>

/**
 * main - Entry point
 * Description: Print reverse alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		--i;
	}

	putchar('\n');

	return (0);
}
