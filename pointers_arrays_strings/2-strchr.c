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
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
