#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string whose length is to be calculated
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
if (*s == '\0') /* Si la chaîne est vide */
return (0);
return (1 + _strlen(s + 1)); /* Appel récursif pour la longueur */
}

/**
 * check_palindrome - Recursively checks if a string is a palindrome
 * @s: The string to be checked
 * @start: The starting index
 * @end: The ending index
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end) /* Si on atteint le milieu de la chaîne */
return (1);

if (s[start] != s[end]) /* Si les caractères ne correspondent pas */
return (0);

return (check_palindrome(s, start + 1, end - 1)); /* Vérifie les caractères suivants */
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
int length = _strlen(s); /* Calcul de la longueur de la chaîne */
if (length == 0) /* Si la chaîne est vide, c'est un palindrome *
return(1);
return (check_palindrome(s, 0, length - 1)); /* Appel récursif pour vérifier les caractères */
}
