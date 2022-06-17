#include "lists.h"
/**
 * free_dlistint - free double linked list
 * @head: head of the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
