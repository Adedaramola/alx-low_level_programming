#include <stdio.h>

/**
 * main - possible combination of single digit
 *
 * Return: 0
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num++);
		if (num == 57)
			break;
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
