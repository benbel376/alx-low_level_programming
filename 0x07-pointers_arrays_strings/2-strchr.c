#include "holberton.h"
/**
 * _strchr - locates a character in string
 * @s: string pointer
 * @c: character
 * Return: returns the charactger pointer
 */

char *_strchr(char *s, char c)
{
while (*s)
{
s++;
if (*s == c)
{
return (s);
}
}
return (0);
}