#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * string_to_int - converts a string to an integer
 * @str: the string to be converted
 *
 * Return: the converted integer
 */
int string_to_int(char *str)
{
	return (atoi(str));
}

/**
 * is_positive_number - checks if a character is a digit
 * @str: the character to be checked
 *
 * Return: 1 if c is a character, otherwise 0
 */
int is_positive_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: the number of argument
 * @argv: the value of the or these argument(s)
 *
 * Return: 1 if num contains a symbol, print 0 if no num is passed, or result
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int number;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		char *arg = argv[i];

		if (!is_positive_number(arg))
		{
			printf("Error\n");
			return (1);
		}
		number = string_to_int(arg);
		sum += number;
	}

	printf("%d\n", sum);

	return (0);
}
