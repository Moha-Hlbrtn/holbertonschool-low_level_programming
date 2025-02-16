#include <stdio.h>

/**
 * main - Entry Point
 * Declaration: Print without printf or puts to the standard error
 * Return: 1 this time
 */
int main(void)
{
	const char *msg1 = "and that piece of art is useful\" - Dora Korpar, ";
	const char *msg2 = "2015-10-19\n";

	fprintf(stderr, "%s%s", msg1, msg2);
	return (1);
}
