#include "lists.h"
/**
 * sum_dlistint - sum all elements of a double list
 * @head: head of he list
 *
 * Return: Always 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int sum = 0;

	if (!head)
		return (sum);

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
