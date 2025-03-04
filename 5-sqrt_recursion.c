#include "main.h"

/**
 * sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_fonction_auxiliaire(n, 0));
}

int _fonction_auxiliaire(int n, int i)
{
	if ((i * i) == n)
	{
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	return (_fonction_auxiliaire(n, i + 1));
}
