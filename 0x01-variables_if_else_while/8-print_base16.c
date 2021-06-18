#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: printing lower and uper case latters
 *
 * Return: 0
 */
int main(void)
{
int ch1;
char ch2;

for (ch1 = 0; ch1 <= 9; ch1++)
{
putchar(ch1 % 10 + '0');
}
for (ch2 = 'a'; ch2 <= 'f'; ch2++)
{
putchar(ch2);
}
putchar('\n');
}
