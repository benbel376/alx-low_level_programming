#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: character to print
 * @accept: character
 * Return: i.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (accept)
{
while (s)
{
if (*s == *accept)
{
count++;
break;
}
s++;
}
accept++;
}
return (count);
}
