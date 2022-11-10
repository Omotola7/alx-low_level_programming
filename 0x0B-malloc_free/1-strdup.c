#include "main.h"
/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */

int _strlen(char *s)
{
unsigned int b;

b = 0;
while (s[b] != '\0') /*count character of string*/
{
b++;
}

return (b);
}

/**
 * _strcpy - copy arrays
 * @src: array of elements
 * @dest: dest array
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int b = 0;

while (src[b] != '\0')
{
dest[b] = src[b];
b++;
}
dest[b] = '\0';

return (dest);
}

/**
 * _strdup - array for prints a string
 * @str: array of elements
 * Return: pointer
 */

char *_strdup(char *str)
{
char *dest;
unsigned int size;

if (str == 0)
{
return (NULL);
}

size = _strlen(str) + 1;

dest = (char *) malloc(size *sizeof(char));

if (dest == 0)
{
return (NULL);
}
_strcpy(dest, str);
return (dest);
}
