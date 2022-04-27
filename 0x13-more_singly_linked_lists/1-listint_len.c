#include "lists.h"
/**
 * listint_len - Print numbers of elements
 * @h: Pointer to a list
 * Return: Integer
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int i = 0;

	temp = h;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
