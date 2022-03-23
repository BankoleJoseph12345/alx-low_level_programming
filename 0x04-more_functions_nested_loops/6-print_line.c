#include "main.h"
#include <stdio.h>

/**
 * print_line - Print a straight line
 * @n: number of - characters
 * Return: 0
 */
void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		_putchar(95);
		a++;
	}
	_putchar('\n');
}
