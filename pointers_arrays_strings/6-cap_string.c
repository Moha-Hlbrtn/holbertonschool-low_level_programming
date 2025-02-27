#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: the string of which the words will be capitalized
 *
 * Return: a pointer to the capitalized words of the s string
 */
char *cap_string(char *s)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (i == 0 || strchr(separators, s[i-1]) != NULL)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - ('a' - 'A');
			}
		}
		i++;
	}
	return s;
}
