#include "main.h"

/**
 * _strpbrk - searches a string for any of a set bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int l, m;

	for (l = 0; *(s + l) != '\0'; l++)
	{
		for (m = 0; *(accept + m) != '\0'; m++)
		{
			if (*(s + l) == *(accept + m))
				return (s + l);
		}
	}
	return ('\0');
}
