#include <stdio.h>

/**
 * main - Entry point
 * Description: Print
 * Return: Always 0 (Success)
 */
int main(void)
{
	int comb1, comb2;

	for (comb1 = '0'; comb1 <= '9'; comb1++)
	{
		for (comb2 = comb1 + 1; comb2 <= '9'; comb2++)
		{
			putchar(comb1);
			putchar(comb2);
			if (comb1 != '8' || comb2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
