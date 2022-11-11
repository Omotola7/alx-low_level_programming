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
	char *f;
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

	if (n > size2)
	n = size2;
	f = malloc((size1 + n + 1) * sizeof(char));

	if (f == NULL)
		return (0);

	for (l == 0; l < size1; l++)
	{
		f[l] = s1[l];
	}

	for (; l < (size1 + n); l++)
	{
		f[l] = s2[l - size1];
	}
	f[l] = '\0';

return (f);
}
