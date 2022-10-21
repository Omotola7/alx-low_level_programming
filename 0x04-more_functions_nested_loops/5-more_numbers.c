#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: Always 0
 */
void more_numbers(void)
{
	int num, k;

	for (k = 0; k <= 9; k++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
