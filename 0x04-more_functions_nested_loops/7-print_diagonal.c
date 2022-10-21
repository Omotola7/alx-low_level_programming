#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int k, l;

	if (n <= 0)
		_putchar('\n');
	for (k = 0; k < n; k++)
	{
		for (l = 0; l < k; l++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
