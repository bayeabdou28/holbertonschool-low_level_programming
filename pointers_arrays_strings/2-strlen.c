#include "main.h"

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Return: La longueur de la chaîne.
 */
int _strlen(char *s)
{
    int length = 0; /* Initialisation du compteur */

    /* Boucle jusqu'à la fin de la chaîne ('\0') */
    while (s[length] != '\0')
    {
        length++; /* Incrémentation du compteur */
    }

    return length; /* Retourne la longueur de la chaîne */
} 
