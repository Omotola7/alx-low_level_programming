#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	int l, m;

	for (l = 0; a[l][64]; l++)
	{
		for (m = 0; m < 8; m++)
				_putchar(a[l][m]);

		_putchar('\n');
	}
}
