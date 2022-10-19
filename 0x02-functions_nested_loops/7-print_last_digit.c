#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ml = n % 10;

	if (ml < 0)
		ml *= -1;

	_putchar(ml + '0');

	return (0);
}
