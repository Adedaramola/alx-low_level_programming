#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: no return
 */
void print_alphabet(void)
{
	int start = 97;

	while (start <= 122)
	{
		_putchar(start++);
	}
	_putchar(10);
}
