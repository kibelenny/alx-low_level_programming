#include "main.h"

/**
 * _realloc - reallocate memory block
 * @ptr: pointer to memory 
 * @old_size: size of ptr in bytes
 * @new_size: new size of new ptr
 * Return: pointer, NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
