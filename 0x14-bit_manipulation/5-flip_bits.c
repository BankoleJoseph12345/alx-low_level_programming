#include "main.h"
/**
 * flip_bits -  function that returns the number of bits you would need to flip
 * @n: int
 * @m: int
 * Return: Always 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j = 0;

	i = n ^ m;
	while (i > 0)
	{
		j += i & 1;
		i >>= 1;
	}
	return (j);
}
