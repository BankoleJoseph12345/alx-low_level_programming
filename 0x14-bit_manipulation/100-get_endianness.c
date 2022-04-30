#include "main.h"
/**
 * get_endianness - Check the endianness
 * Return: 0 or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
