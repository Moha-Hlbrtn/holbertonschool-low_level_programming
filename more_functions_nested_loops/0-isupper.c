#include "main.h"

/*
 * _isupper: checks if c is an uppercase character
 * @c : the argument the functiont takes which is an integer
 * return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
