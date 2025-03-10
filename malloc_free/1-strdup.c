#include <stdlib.h> /* Pour malloc et free */
#include <string.h> /* Pour strlen */

/**
 * _strdup - Crée une copie d'une chaîne de caractères donnée.
 * @str: La chaîne de caractères à copier.
 *
 * Return: Un pointeur vers la nouvelle chaîne copiée, ou NULL si échec.
 */
char *_strdup(char *str)
{
    char *copy;
    unsigned int len, i;

    /* Vérifie si str est NULL */
    if (str == NULL)
        return NULL;

    /* Calcule la longueur de la chaîne d'origine */
    len = strlen(str);

    /* Alloue de la mémoire pour la copie (taille + 1 pour '\0') */
    copy = (char *)malloc((len + 1) * sizeof(char));
    if (copy == NULL) /* Vérifie si malloc a échoué */
        return NULL;

    /* Copie chaque caractère de str dans copy */
    for (i = 0; i <= len; i++) /* Inclut le caractère nul '\0' */
        copy[i] = str[i];

    return copy;
}

