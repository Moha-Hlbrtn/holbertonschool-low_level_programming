#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string to be changed
 *
 * Return: a pointer to a converted string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
		i++;
	}
	return (s);
}
