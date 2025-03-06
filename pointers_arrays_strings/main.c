#include "main.h"

/**
 * main - Entry point to test _strstr function.
 *
 * Return: Always 0.
 */
int main(void)
{
char *s = "hello, world";
char *f = "world";
char *t;

t = _strstr(s, f);

if (t)
_puts(t); /* Utilise _puts pour afficher la sous-chaîne trouvée */
else
_puts("Not found");

return (0);
}
