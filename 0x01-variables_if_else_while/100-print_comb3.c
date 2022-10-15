#include <stdio.h>
/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, d;

	c = 48;
	d = 48;

	while (d < 58)
	{
		c = 48;
		while (d < 58)
		{
			if (d != c && d < c)
			{
				putchar(d);
				putchar(c);
				if (c == 57 && d == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
