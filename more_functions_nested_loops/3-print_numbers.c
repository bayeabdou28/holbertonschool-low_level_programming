#include "main.h"

/**
 * print_numbers - Affiche les chiffres de 0 à 9 suivis d'un saut de ligne
 */
void print_numbers(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
_putchar(digit);
_putchar('\n');
}
