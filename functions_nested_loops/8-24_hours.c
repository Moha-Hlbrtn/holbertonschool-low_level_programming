#include "main.h"

/**
 * jack_bauer - the function
 * @void: it has no argument
 * return: No return as it has no argument
 */
void jack_bauer(void)
{
	int heures;
	int minutes;

	for (heures = 0; heures < 24; heures++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((heures / 10) + '0');
			_putchar((heures % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
