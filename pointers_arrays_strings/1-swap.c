#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 *
 * Description: This function takes two integer pointers and swaps the
 * values they point to. It does not return any value.
 */
void swap_int(int *a, int *b)
{
	int stock_a;

	stock_a = *a;
	*a = *b;
	*b = stock_a;
}
