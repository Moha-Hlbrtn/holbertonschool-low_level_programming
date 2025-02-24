#include "main.h"

/**
 * _isupper - Checks if a given character is an uppercase letter
 *
 * @c: The character to be checked
 *
 * Return: 1 if the character is an uppercase letter, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
