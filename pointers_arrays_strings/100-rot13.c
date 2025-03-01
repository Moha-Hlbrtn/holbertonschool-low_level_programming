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

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'z' && s[i] + 13 > 'z')
					|| (s[i] >= 'A' && s[i] <= 'Z' && s[i] + 13 > 'Z'))
			{
				s[i] = s[i] - 13;
			}
			else
			{
				s[i] = s[i] + 13;
			}
		}
	}
	return (s);
}
