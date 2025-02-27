#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer taking into account all the - and +
 * @s: the string to be converted
 *
 * Return: 0 if there are no numbers in the string
 */
int _atoi(char *s)
{
	int sign = 1;
	long num = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			num = num * 10 + (*s - '0');
			if (num > 2147483647)
			{
				if (sign == 1)
					return (2147483647);
				else
					return (-2147483648);
			}
		}
		else if (started)
		{
			break;
		}
		s++;
	}
	return (num * sign);
}
