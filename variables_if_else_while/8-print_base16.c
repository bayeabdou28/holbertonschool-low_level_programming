#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all numbers of base 16 in lowercase using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{int num;

for (num = 0; num < 10; num++)
putchar(num + '0');

for (num = 0; num < 6; num++)
putchar(num + 'a');

putchar('\n');
return (0); }
