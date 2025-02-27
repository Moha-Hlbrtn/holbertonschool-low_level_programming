#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * and src does not need to be null_terminated if it contains n or more bytes
 * @dest: the first parameter
 * @src: the second  parameter to be concatenated
 * @n: the parameter containing n bytes
 * 
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';

	return (dest);
}
