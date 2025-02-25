#include <stdio.h>
#include "main.h"

int main(void)
{
char test1 = '5';
char test2 = 'A';

printf("%d\n", _isdigit(test1)); // Doit afficher 1 (car 5 est un chiffre)
printf("%d\n", _isdigit(test2)); // Doit afficher 0 (car A n'est pas un chiffre)

return (0); }
