#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string (int)
 */
int _strlen_recursion(char *s)
{
if (*s == '\0') /* Base case: if we reach the end of the string */
{
return (0);
}
return (1 + _strlen_recursion(s + 1)); /* Add 1 and call function recursively */:
}
