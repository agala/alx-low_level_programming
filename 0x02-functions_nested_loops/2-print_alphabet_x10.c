#include "main.h"

/**
 * print_alphabet_x10 -  make alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char letter;
	int x;
	x = 0;

	while (x < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
		_putchar(letter);
		}
		_putchar('\n');
		x++;
	}
}
