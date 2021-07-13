#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to fill array with
 * Return: string of chars
 */

char *argstostr(int ac, char **av)
{

char *str;
int i, j;
if (ac == 0 || av == NULL)
{
return (NULL);
}
str = malloc(sizeof(char *) * ac);
if (str)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
j = 0;
while(av[i][j])
{
*str += av[i][j];
j++;
}
*str += '\n';
}
}
return (str);
}
