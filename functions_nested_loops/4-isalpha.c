#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 * @c: The character to check.
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise.
 */
int _isalpha(int c)
{
    /* Vérifie si c est une lettre minuscule ou majuscule */
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}
