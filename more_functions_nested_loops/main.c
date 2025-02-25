#include <stdio.h>
#include "main.h"

int main(void)
{
char c1 = 'A';
char c2 = 'a';

printf("%c: %d\n", c1, _isupper(c1)); // Doit afficher "A: 1"
printf("%c: %d\n", c2, _isupper(c2)); // Doit afficher "a: 0"

return (0); }
