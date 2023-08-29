#include "lists.h"

/**
 * listint_len - a function  that returns the number of elements
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cur = h;
	size_t cou = 0;

	while (cur != NULL)
	{
		cur = cur->next;
		cou++;

	}
	return (cou);
}
