#include "main.h"

/**
* main - Point d'entrée pour tester _strchr
*
* Return: Toujours 0 (succès)
*/
int main(void)
{
char *s = "hello";
char *f;

f = _strchr(s, 'l');
if (f != NULL)
{
while (*f)
{
_putchar(*f);
f++;
}
_putchar('\n');
}
else
{
_putchar('N');
_putchar('U');
_putchar('L');
_putchar('L');
_putchar('\n');
}
return (0);
}


