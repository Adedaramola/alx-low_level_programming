#include <stdio.h>

/**
 * main - Prints output to standard error
 *
 * Return: 1
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", text);
	return (1);
}
