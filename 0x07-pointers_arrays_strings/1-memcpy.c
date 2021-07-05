#include "holberton.h"
/**
 * *_memcpy - functions that copies memory area
 * @dest: destination
 * @src: source
 * @n: number of positions
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int c;
for (c = 0; c < n; c++)
{
*(dest + c) = src;
*src++;
}
return (dest);
}
