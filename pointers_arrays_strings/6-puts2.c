#include "main.h"

/**
 * puts2 - Affiche un caractère sur deux d'une chaîne, en commençant par le premier
 * @str: Pointeur vers la chaîne de caractères
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0') /* Parcours de la chaîne */
    {
        _putchar(str[i]);  /* Affiche le caractère actuel */
        i += 2;            /* Passe au caractère suivant en sautant un */
    }
    _putchar('\n');        /* Ajout du saut de ligne */
}

