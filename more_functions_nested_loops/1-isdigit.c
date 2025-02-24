#include "main.h"

/**
 * _isdigit - the function takes integer c + checks if a digit is entre 0 & 9
 * @c: parameter to be checked
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
