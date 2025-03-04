#include "main.h"

/**
 * print_number - print an integer
 * @n: the integer parameter to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n
	}
	else
void print_number(int n) {
    if (n < 0) {      // Un seul if
        _putchar('-');
        n = -n;
    }
    int divisor = 1;
    while (n / divisor >= 10) {
        divisor *= 10;
    }

    while (divisor > 0) {
        _putchar((n / divisor) % 10 + '0');
        n %= divisor;  // Mettre à jour n pour imprimer le chiffre suivant
        divisor /= 10;
    }
}

