#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints whether positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positve", n);

	if (n == 0)
		printf("%d is zero", n);

	if (n < 0)
		printf("%d is negative", n);
	return (0);
}
