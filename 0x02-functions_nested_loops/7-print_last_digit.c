#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int k;

	if (n < 0)
	{
		k = -1 * (n % 10);
		_putchar(k + '0');
		return (k);
	}
	else
	{
		k = n % 10;
		_putchar(k + '0');
		return (r);
	}
}
