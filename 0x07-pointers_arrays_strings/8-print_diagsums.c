#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals.
 * print_diagsums - of a square matrix of integers.
 * @a: the matrix of integers.
 * @size: the size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int l, sum1 = 0, sum2 = 0;

	for (l = 0, l < size; l++)
	{
		sum1 += a[l];
		a += size;
	}

	a -= size;

	for (l = 0, l < size, l++)
	{
		sum2 += a[l];
		a -= size;
	}

	print("%d, %d\n", sum1, sum2);
}
