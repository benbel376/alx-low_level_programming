#include "holberton.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * main - this function prints the name of the program.
 * @argc: count of the command line arguments
 * @argv: the command line arguments
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
  int fir;
  int sec;
if (argc == 3)
{
  fir = atoi(*(argv += 1));
  argv -= 1;
  sec = atoi(argv[2]);
  printf("%i\n", fir * sec);
  return  (0);
}
printf("error");
return (1);

}
