#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @n: an integer as argument named n
 *
 * Return: 0 Success
 */
int main(int n)
{
	int n3;
	int n5;

	if (n < (1024 % 3) || n < (1024 % 5))
	{
		for (n = 0; n < 1024; n++)
		{
			printf("%d", n3 * n5);
		}
	}
	printf("\n");

	return (0);
}
