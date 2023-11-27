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
int pop_listint(listint_t **head);
int main(void)
{
    listint_t *head;
    int n;

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
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
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
int pop_listint(listint_t **head)
{
    listint_t *tmp = *head;
    int n = tmp -> n;
    *head = (*head) -> next;
    free(tmp);
    return n;
}
