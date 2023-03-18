#include <stdio.h>

/**
 * main - program that print numbers from 0 to 9
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
