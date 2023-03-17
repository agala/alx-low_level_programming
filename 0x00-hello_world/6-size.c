#include <stdio.h>
/**
 * main - a C program that prints the size of various types on the compute
 * Return: 0(Sucess)
 */
int main(void)
{
	char a;
	int b;
	float f;
	long int c;
	long long int d;

	printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
