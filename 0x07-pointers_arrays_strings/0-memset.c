#include "holberton.h"
/**
 * *_memset - fills memory with constant byte
 * @s: character pointer
 * @b: the charactger
 * @n: number of positions
 * Return: returns a pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
int c;
for (c = 0; c <= n; c++)
{
s = b;
*s++;
}
*s -= n;
return (*s);
}
