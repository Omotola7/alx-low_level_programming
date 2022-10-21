#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int n, f, count;

	if (n < 0)
	{
		_putchar(45);
		g = n * -1;
	}
	else
	{
		g = n;
	}

	f = g;
	count = 1;

	while (f > 9)
	{
		f /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((g / count) % 10) + 48);
	}
}
