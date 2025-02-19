#include "main.h"

/**
 * _abs - Calcule la valeur absolue d'un entier
 * @n: L'entier dont la valeur absolue doit être calculée
 *
 * Description: Prend un entier en argument et renvoie
 * sa valeur absolue, negatif si negatif, si positif il reste tel que
 *
 * Return: La valeur absolue de l'entier int
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
