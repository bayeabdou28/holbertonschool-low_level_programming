#include "main.h"
#include <stdio.h>

/**
 * main - Teste la fonction _isupper
 *
 * Return: 0 (Succès)
 */
int main(void)
{
char c1 = 'A';
char c2 = 'z';

printf("%c est en majuscule ? %d\n", c1, _isupper(c1)); // Doit afficher 1
printf("%c est en majuscule ? %d\n", c2, _isupper(c2)); // Doit afficher 0

return (0); }
