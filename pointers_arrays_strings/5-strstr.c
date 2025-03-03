#include "main.h"

#ifndef NULL
#define NULL ((void *)0)
#endif

/**
 * _strstr - locates a substring
 * @haystack: used to find the first occurence of substring
 * @needle: in this string
 *
 * Return: a pointer to the début of located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{

		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
