#include "main.h"

/**
 *_calloc - allocated memoria for nmeb elemn de zise bytes
 * @nmemb: number of element in the array
 * @size: bytes for each position in array
 * Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int l;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(nmemb * size);
if (p == NULL)
return (NULL);

for (l = 0; l < nmemb * size; l++)
p[l] = 0;

return (p);

}
