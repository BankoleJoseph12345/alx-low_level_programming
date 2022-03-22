#include "main.h"
#include <stdio.h>
/**
* print_array - Prints n elements of an arrays of integers
* @a: array to be printed
* @n: number of elements
*/
void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
while (i == 0)
{
printf("%d", a[i]);
i++;
}
printf(", %d", a[i]);
}
printf("\n");
}
