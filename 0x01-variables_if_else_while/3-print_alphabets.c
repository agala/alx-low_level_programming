#include <stdio.h>

/**
 * main - program that prints lowercase alpabets followed by uppercase alphabets
 * Return: 0 (Success)
*/
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int z;

	for (z = 0; z < 52; z++)
	{
		putchar(alp[z]);
	}
	putchar('\n');
	return (0);
}
