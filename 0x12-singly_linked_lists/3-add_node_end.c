#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *lastNode;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	lastNode = *head;
	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	lastNode->next = new_node;
	return (new_node);
}
/**
 * _strlen - calculates the length of a string
 * @string: the string to be lengthed
 *
 * Return: length of the string
 */
unsigned int _strlen(const char *string)
{

unsigned int length = 0;

while (*string != '\0')
{
length++;
string++;
}

return (length);
}
