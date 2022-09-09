#include <stdio.h>

/**
 * main - prints all letters except q, e
 *
 * Return: 0
 */
int main(void)
{
	int lower = 96;

	while (lower < 123)
	{
		lower++;
		if (lower == 101 || lower == 113)
		{
			continue;
		}
		putchar(lower);
	}
	putchar(10);
	return (0);
}
