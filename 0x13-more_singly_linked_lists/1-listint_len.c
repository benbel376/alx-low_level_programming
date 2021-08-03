#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * listint_len - prints the content of the list
 * @h: takes in a list pointer
 *
 * Return: size_t which s int
 */

size_t listint_len(const listint_t *h)
{
size_t n = 0;
while (h != NULL)
{
h = (*h).next;
n = n + 1;
}
return (n);
}
