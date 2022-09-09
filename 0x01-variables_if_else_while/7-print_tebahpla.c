#include <stdio.h>

/**
 * main - lowercase in reverse
 *
 * Return: 0
 */
int main(void)
{
	int num = 122;

	while (num > 96)
	{
		putchar(num--);
	}
	putchar(10);
	return (0);
}
