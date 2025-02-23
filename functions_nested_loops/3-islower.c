#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')  // Vérifie si c est une lettre minuscule
return (1);
else
return (0); }
