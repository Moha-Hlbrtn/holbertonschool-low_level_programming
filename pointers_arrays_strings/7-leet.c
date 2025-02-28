#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the parameter to be encoded
 *
 * Return: a pointer to the encoded value
 */
char *leet(char *s)
{
	int i;
	int j;
	char tab_minuscule[5] = {'a', 'e', 'o', 't', 'l'};
	char tab_majuscule[5] = {'A', 'E', 'O', 'T', 'L'};
	char tab2[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 5; j++)
		{
			if (s[i] == tab_minuscule[j] || s[i] == tab_majuscule[j])
			{
				s[i] = tab2[j];
			}
		}
	return (s);
}
