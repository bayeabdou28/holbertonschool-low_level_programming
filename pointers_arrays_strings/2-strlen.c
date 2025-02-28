#include "main.h"

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Return: La longueur de la chaîne.
 */
int _strlen(char *s) /* Déclaration correcte */
{
int length = 0; /* Initialisation du compteur */

/* Boucle pour parcourir la chaîne */
while (s[length] != '\0')
{
length++; /* Incrémentation du compteur */
}

return length; /* Retourne la longueur */
} 
