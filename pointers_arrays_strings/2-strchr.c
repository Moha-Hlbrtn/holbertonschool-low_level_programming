#include "main.h"

#ifndef NULL
#define NULL ((void *)0)
#endif

/**
 * _strchr - locates a character in a string
 * @s: the string where the character would be located if available
 * @c : the character to find
 *
 * Return: a pointer to the first occurrence of @c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
