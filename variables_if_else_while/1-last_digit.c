#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: Print the number stored in n if is positive, negative, or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 100 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 100);
	else if (n % 100 == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 100);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 100);

	/* your code goes there */
	return (0);
}
