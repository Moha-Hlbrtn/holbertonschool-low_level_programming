#include "main.h"

/**
 * reverse_array - reverses the content of an array of integeres
 * @a: the parameter to be reversed
 * @n: the number of elements of the array
 *
 * Return: nothing as it is void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
