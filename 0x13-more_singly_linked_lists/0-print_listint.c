#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Print elements of a singly linked list
 * @h: Pointer to a list
 * Return: n of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int i = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
