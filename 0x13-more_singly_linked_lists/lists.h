#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_t - singly list definition
 * @n: data storage
 * @next: pointer to next node
 */
typedef struct listint_t
{
int n;
struct listint_t *next;
} listint_t;

int _putchar(char c);
size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
#endif
