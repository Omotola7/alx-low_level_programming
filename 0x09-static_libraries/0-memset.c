#include "main.h"
/**
 * _memset - fills memory with a constant by te.
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
		*(s + l) = b;

	return (s);
}
