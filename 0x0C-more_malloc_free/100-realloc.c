#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *clone, *relloc;
	unsigned int l;

	if (ptr != NULL)
	clone = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	relloc = malloc(new_size);
	if (relloc == NULL)
	return (0);
	for (l = 0; l < (old_size || l < new_size); l++)
	{
		*(relloc + l) = clone[l];
	}
	free(ptr);
return (relloc);
}
