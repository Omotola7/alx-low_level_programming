#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (p == NULL)
		return (0);

	for (l == 0; l < size1; l++)
	{
		p[l] = s1[l];
	}

	for (; l < (size1 + n); l++)
	{
		p[l] = s2[l - size1];
	}
	p[l] = '\0';

return (p);
}
