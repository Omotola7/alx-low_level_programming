#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int l = 0;

	for (; *(s + l) != '\0'; l++)
		if (*(s + l) == c)
			return (s + l);
	if (*(s + l) == c)
		return (s + l);
	return ('\0');
}
