#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
list_t *current;
list_t *temp;

current = head;
while (current != NULL)
{
temp = current->next;
free(current->str);
free(current);
current = temp;
}
}
