#include "main.h"

/**
 * is_prime_number - check if the argument is a prime number
 * @n: the argument to check
 *
 * Return: 1 if it is a prime number, otherwise 0
 *
 * _second_fonct_aux - check the divisibility of n by increaing value the of i
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (_second_fonct_aux(n, 2));
}

/**
 * _second_fonct_aux - Helper function to check the divisibility of n by i + 1
 * @n: the integer to check
 * @i: the current divisor being tested
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int _second_fonct_aux(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i > (n / 2))
	{
		return (1);
	}
	return (_second_fonct_aux(n, i + 1));
}
