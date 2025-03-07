#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
if (*s == '\0') /* Base case: end of string */
{
return (0);
}

return (1 + _strlen(s + 1)); /* Recursive case: increment length */
}

/**
 * check_palindrome - Recursively checks if a string is a palindrome.
 * @s: The string to be checked.
 * @start: The starting index of the string.
 * @end: The ending index of the string.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end) /* Base case: we've checked all characters */
{
return (1);
}

if (s[start] != s[end]) /* Base case: characters do not match */
{
return (0);
}

return (check_palindrome(s, start + 1, end - 1)); /* Recursive case */
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
int length = _strlen(s); /* Get the length of the string */

if (length == 0) /* If the string is empty, it is considered a palindrome */
{
return (1);
}

return (check_palindrome(s, 0, length - 1)); /* Start checking from both ends */
}
