#include "main.h"

/**
 * _memcpy - copies the memory area from one area to an other
 * @src: the memory that will be copied
 * @dest: the destination where the memory will be copied
 * n@: the number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
