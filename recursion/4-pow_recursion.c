#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the integer parameter of which the value would be returned
 * @y: the power to which the value of x would be raised
 *
 * Return: if y < 0 it should return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
