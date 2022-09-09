#include <stdio.h>

/**
 * main - prints base 16
 *
 * Return: 0
 */
int main(void)
{
	int num = 48;
	int let = 97;

	while (num < 58)
	{
		putchar(num++);
	}
	while (let < 103)
	{
		putchar(let++);
	}
	putchar(10);
	return (0);
}
