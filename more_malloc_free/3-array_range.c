
#include "main.h"
#include <stdlib.h>
#include <stdint.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to the array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	size_t count;
	size_t i;

	if (min > max)
		return (NULL);

	count = (size_t)((long long)max - min + 1);

	if (count > SIZE_MAX / sizeof(int))
		return (NULL);

	array = malloc(count * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		array[i] = (int)((long long)min + (long long)i);

	return (array);
}

