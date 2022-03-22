#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting
 * eith the first character
 *@str: string
 * Return: Always 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
