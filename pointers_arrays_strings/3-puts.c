#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: The string to be printed
 *
 * Description: This function takes a pointer to a string and prints
 * each character of the string to stdout using _putchar function.
 * It then adds a newline character at the end.
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
