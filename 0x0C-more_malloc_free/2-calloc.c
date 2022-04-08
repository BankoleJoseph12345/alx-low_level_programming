#include "main.h"
/**
 * _memset - Copy the character
 * @s: string
 * @b: stdout
 * @n: number of bytes
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


#include "main.h"
/**
 * _calloc - Allocates memory for an array
 * @nmemb: unsigned integer
 * @size: size of array
 *
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, (nmemb * size));
	return (p);
}
