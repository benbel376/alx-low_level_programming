#include <stddef.h>
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
size_t n;
while(h != NULL)
{
printf("%d\n", (*h).n);
h = (*h).next;
++n;
}
return(n);
}
