#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: Pointer to the string to print
 *
 * Return: Nothing (void)
 */
void _puts_recursion(char *s)
{
if (*s == '\0') /* Base case: if we reach the end of the string */
{
_putchar('\n');
return;
}

_putchar(*s); /* Print the current character */
_puts_recursion(s + 1); /* Recursively call function with the next character */
}
