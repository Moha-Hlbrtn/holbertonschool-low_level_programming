#include "main.h"

/**
 * print_square - the function print a square based on the value of size
 * @size : the argument containing the size value of the square
 * return: nothing as it is void
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
