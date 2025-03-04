#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a given number
 * @n: the number for which to calculate the square root
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

/**
 * _fonction_auxiliaire - Helper function to find the natural square root
 * @n: the number for which to calculate the square root
 * @i: the current value being tested as the potential square root
 *
 * Return: -1 if n have no natural square root, otherwise the natural square
 */
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
