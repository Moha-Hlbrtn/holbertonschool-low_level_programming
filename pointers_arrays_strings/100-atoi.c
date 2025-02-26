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
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}

		result = result * 10 + digit;
		i++;
	}

	return (result * sign);
}
