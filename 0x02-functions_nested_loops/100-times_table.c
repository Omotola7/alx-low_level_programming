#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int e, m, o;

	if (n >= 0 && n <= 15)
	{
		for (e = 0; e <= n; e++)
		{
			for (m = 0; m <= n; m++)
			{
				o = m * e;
				if (m == 0)
				{
					_putchar(o + '0');
				} else if (o < 10 && m != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(o + '0');
				} else if (o >= 10 && o < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((o / 10) + '0');
					_putchar((o % 10) + '0');
				} else if (o >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((o / 100) + '0');
					_putchar(((o / 10) % 10) + '0');
					_putchar((o % 10) + '0');
				}
			}
			_putchar('\n');
		}
}
