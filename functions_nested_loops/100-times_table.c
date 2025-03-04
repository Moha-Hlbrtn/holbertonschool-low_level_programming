#include "main.h"
#include <stdio.h>

/**
 * print_times_table - the function that prints the n times table
 * @n: the paramater n type integer named n
 *
 * return: nothing as it is void
 */
void print_times_table(int n)
{
	int times;
	int table;

	if (n > 15 || n < 0)
		return;

	for (times = 0; times <= n; times++)
	{
		for (table = 0; table < n; table++)
		{
				printf("%d, ", times * table);
		}
		printf("%d", times * table);
		printf("\n");
	}
}
