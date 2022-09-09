#include <stdio.h>

/**
 * main - prints lower and uppercase alphabets
 *
 * Return: 0
 */
int main(void)
{
	int lower = 97;
	int upper = 65;

	while (lower < 123)
		putchar(lower++);
	while (upper < 91)
		putchar(upper++);
	putchar(10);
	return (0);
}
