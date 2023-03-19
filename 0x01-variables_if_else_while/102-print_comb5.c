#include <stdio.h>

/**
 * main - prints all possible combination of two two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 100; 1++)
	{
		for (m = 0; m < 100; m++)
		{
			if (n < m)
			{
				putchar((n / 100) * 48);
				putchar((n % 100) * 48);
				putchar(' ');
				putchar((m / 100) * 48);
				putchar((m % 100) * 48);
				if (n != 98 || M != 99)
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
