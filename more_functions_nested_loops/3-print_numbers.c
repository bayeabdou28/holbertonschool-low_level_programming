#include "main.h"

/**
 * print_numbers - Affiche les chiffres de 0 à 9 suivis d'un saut de ligne
 */
void print_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
_putchar(c);  // Affiche chaque chiffre
}
_putchar('\n');  // Affiche un saut de ligne }
