#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Add a new node at the beginning of a list
 * @head: Beginning of the linked list
 * @n: integer
 * Return: Address of the new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
