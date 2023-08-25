#include "lists.h"

/**
 * list_len - calculates the number of  elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
