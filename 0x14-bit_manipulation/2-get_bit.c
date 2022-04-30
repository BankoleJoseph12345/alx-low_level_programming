#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: Value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
