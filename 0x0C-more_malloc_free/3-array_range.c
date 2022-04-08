#include "main.h"
/**
 * array_range - Array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: Always 0
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;
	int j  = min;

	if (min > max)
		return (0);
	ptr = malloc((max - min + 1) * sizeof(int));

	if (!ptr)
		return (0);
	while (i <= max - min)
		ptr[i++] = j++;
	return (ptr);
}
