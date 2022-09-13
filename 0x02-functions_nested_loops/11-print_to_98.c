#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n: starting number
 * Return: void
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf(n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	_putchar('\n');
}
