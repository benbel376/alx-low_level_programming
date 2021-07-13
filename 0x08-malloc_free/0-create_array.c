#include "holberton.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * create_array - a function to create array and initilize with character
 * @size: the size of the array to be created
 * @c: the character to add in the array
 *
 * Return: char or Null
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
{
return (NULL);
}
else
{
arr = malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
return (NULL);
}
