#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x;
	char letter;

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
