#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Printing two digit combo
 *
 * Return: 0
 */
int main(void)
{
int cha;
for (cha = 0; cha <= 8; cha++)
{
int chb;
for (chb = 1; chb <= 9; chb++)
{

putchar(cha % 10 + '0');
putchar(chb % 10 + '0');
if (cha == 8 && chb == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
return (0);
}
