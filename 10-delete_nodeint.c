#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
listint_t *add_nodeint_end(listint_t **head, const int n);
size_t print_listint(const listint_t *h);
void free_listint2(listint_t **head);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 5);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    return (0);
}
listint_t *add_nodeint_end(listint_t **head, const int n)
{
   listint_t *newnode = malloc(sizeof(listint_t));
   
   if (newnode == NULL)
   {
       return NULL;
   }
   newnode -> n = n;
   newnode -> next = NULL;
   
   if (*head == NULL)
   {
       *head = newnode;
   }
   else
   {
       listint_t *last = *head;
       while (last -> next)
       {
           last = last -> next;
       }
       last -> next = newnode;
   }
   return newnode;
}
size_t print_listint(const listint_t *h)
{
    int counter = 0;
    while (h != NULL)
    {
        printf("%i\n", h -> n);
        h = h -> next;
        counter++;
    }
    return counter;
}
void free_listint2(listint_t **head)
{
    listint_t *tmp;
    while (*head != NULL)
    {
        tmp = *head;
        *head = (*head) -> next;
        free(tmp);
    }
    free(*head);
}
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *next;
    unsigned int i = 0;
    listint_t *current = *head;
    
    if (index > 0)
    {
        while (i < (index - 1))
        {
            current = current -> next;
            i++;
        }
    }
    else
    {
        if (current == NULL)
        {
            return 0;
        }

        *head = (*head)->next;
        free(current);
        return 1;
    }
    next = current -> next;
    current -> next = next -> next;
    free(next);
    return 1;
}
