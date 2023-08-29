#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning list
 * @head: pointer to the pointer of the head of the list
 * @n: the value to be add to the new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
