#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string to be encoded using rot13
 *
 * Return: the pointer to the string encoded
 */
char *rot13(char *s)
{
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			c = (c >= 'a' && c <= 'z') ? ((c - 'a' + 13) % 26 + 'a')
				: ((c - 'A' + 13) % 26 + 'A');
			s[i] = c;
		}
	}

	return (s);
}
