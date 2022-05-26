#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
char *create_array(unsigned int size, char c)
{
	int *ptr;
	int i, size;

	if (size = 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
