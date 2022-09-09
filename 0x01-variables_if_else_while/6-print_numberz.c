#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 0
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num++);
	}
	putchar(10);
	return (0);
}
