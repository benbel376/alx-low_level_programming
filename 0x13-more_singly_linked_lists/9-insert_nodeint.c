#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to head of list
 * @idx: index to add new node
 * @n: value at new node
 * Return: address of new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current;
listint_t *new;


new = malloc(sizeof(listint_t));
if (!head || !new)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
(*head) = new;
return (new);
}
current = *head;
while (idx != 1)
{
current = current->next;
--idx;
if (current == NULL)
{
free(new);
return (NULL);
}
}
new->next = current->next;
current->next = new;
return (new);
}
