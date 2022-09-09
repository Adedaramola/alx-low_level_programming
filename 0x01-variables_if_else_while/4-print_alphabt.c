#include <stdio.h>

/**
 * main - prints all letters except q, e
 *
 * Return: 0
 */
int main(void)
{
	int lower = 97;

	while (lower < 123)
	{
		putchar(lower++);
		if (lower == 113 || lower == 101)
		{
			continue;
		}
	}
	putchar(10);
	return (0);
}
