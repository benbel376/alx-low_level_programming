#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - prints the content of the list
 * @listint_t: takes in a list pointer
 * 
 * Return: size_t which s int
 */

size_t print_listint(const listint_t *h)
{
while(h != NULL)
{
printf("%d\n", (*h).n);
h = (*h).next;
}
}
