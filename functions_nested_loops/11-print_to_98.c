#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the integer
 * return: nothing as it is void
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		for (; n < 99; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; --n)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
		printf("\n");
	}
}
