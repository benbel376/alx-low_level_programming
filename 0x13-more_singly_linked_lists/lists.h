#ifndef LISTS_H
#define LISTS_H

int _putchar(char c);
typedef struct listint_t
{
  int n;
  struct listint_t *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif
