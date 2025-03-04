#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to analyse
 * @accept: the string containing the accepted characters
 *
 * Return: the number of bytes in s, consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (i);
}
