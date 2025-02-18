#include "main.h"

/**
 * Déclaration d'un prototype sans paramètres
 */
void print_alphabet(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int alphabet = 'a';
		
		while (alphabet < 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

	_putchar('\n');

	return (0);
}
