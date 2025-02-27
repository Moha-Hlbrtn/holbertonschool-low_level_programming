#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the first parameter where the string will be copied
 * @src: the second parameter to be copied
 * @n: the maximum number of characters to be copied from src
 * Return: result dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
