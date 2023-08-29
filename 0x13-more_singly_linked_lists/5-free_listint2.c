#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head:pointer to the  pointer to the head of the list
 * Return:void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
