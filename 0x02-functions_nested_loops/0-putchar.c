#include "main.h"

/**
 * main - Prints "putchar"
 *
 * Return: 0
 */
int main(void)
{
	char text[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar(10);
	return (0);
}
