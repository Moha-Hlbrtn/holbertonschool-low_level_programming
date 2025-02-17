#include <stdio.h>

/**
 * main - Entry point
 * Description: Print
 * Return: Always 0 (Success)
 */
int main(void)
{
	int comb1, comb2, comb3;

	for (comb1 = '0'; comb1 <= '9'; comb1++)
	{
		for (comb2 = comb1 + 1; comb2 <= '9'; comb2++)
		{
			for (comb3 = comb2 + 1; comb3 <= '9'; comb3++)
			{
				putchar(comb1);
				putchar(comb2);
				putchar(comb3);
				if (comb1 != '7' || comb2 != '8' || comb3 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
