#include "main.h"
#include <stdio.h>

/**
 * main - Point d'entrée du programme
 * Return: 0 si terminé
 */
int main(void)
{
	int fibonacci;

	for (fibonacci = 1; fibonacci < 51; fibonacci++)
	{
		if (fibonacci == 50)
		{
			printf("%d", fibonacci);
		}
		else
		{
			printf("%d, ", fibonacci);
		}
	}
	printf("\n");
	return (0);
}
