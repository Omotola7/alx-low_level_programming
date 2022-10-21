#include "main.h"

/**
 * print_triangle - prints a triangle
 * @n: size of the triangle
 */
void print_triangle(int n)
{
	int g, tri;

	if (n > 0)
	{
		for (g = 1; g <= n; g++)
		{
			for (tri = n - g; tri > 0; tri--)
				_putchar(' ');
			for (tri = 0; tri < h; tri++)
				-putchar('#');

			if (g == n)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
