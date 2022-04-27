#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Delete the first element of a singly linked list
 * @head: Pointer to a list
 * Return: 0;
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}
