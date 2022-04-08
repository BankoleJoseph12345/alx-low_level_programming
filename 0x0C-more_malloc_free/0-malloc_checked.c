#include "main.h"
/**
 * *malloc_checked - Allocates memory using malloc
 * @b: unsigned int b
 *
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
