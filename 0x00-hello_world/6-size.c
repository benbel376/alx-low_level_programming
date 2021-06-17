#include <stdio.h>
/**
 * main - Entry point
 * return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
long long int longLongIntType;
long int longIntType;

printf("Size of a char: ", sizeof(charType));
printf("Size of an int: ", sizeof(intType));
printf("Size of a long int: ", sizeof(longIntType));
printf("Size of a long long int: ", sizeof(longLongIntType));
printf("Size of a float: ", sizeof(floatType));
return (0);
}
