#include <stdio.h>

/**
 * main - prints from 0 > 100 sauf x3 Fizz & x5 Buzz, for "x2" & "x5" FizzBuzz
 * Return: 0 if success
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	printf("\n");
	return (0);
}
