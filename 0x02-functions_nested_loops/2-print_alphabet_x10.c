#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int count = 0;
	int start = 97;

	while (count++ <= 9)
	{
		while (start <= 122)
		{
			_putchar(start++);
		}
	}
	_putchar(10);
}
