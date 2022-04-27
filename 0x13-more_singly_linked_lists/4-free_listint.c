#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Add a new node at the end of a list
 * @head: Addres of the first node of a list
 * Return: Address of the new node
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *temp2;

	temp = head;
	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
}
