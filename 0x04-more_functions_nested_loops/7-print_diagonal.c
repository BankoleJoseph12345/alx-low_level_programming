#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Print diagonal line
 * @n: number of /
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int diagonal;

	for (i = 0; i < n; i++)
	{
		for (diagonal = 0; diagonal < i; diagonal++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}

}
