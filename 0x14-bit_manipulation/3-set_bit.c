#include "main.h"
#include "2-get_bit.c"
/**
 * set_bit - Set a bit at given index
 * @n: integer
 * @index: unsigned int
 * Return: Always 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) |= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
