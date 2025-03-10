#include <stdlib.h>  /* Besoin de malloc */
#include "main.h"    /* Contient la déclaration de create_array */

/**
 * create_array - Crée un tableau et le remplit avec un caractère
 * @size: Nombre d'éléments dans le tableau
 * @c: Caractère à mettre dans chaque case
 *
 * Return: Un pointeur vers le tableau, ou NULL si échec
 */
char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    /* Vérifie si la taille est 0 */
    if (size == 0)
        return (NULL);

    /* Alloue de la mémoire */
    array = malloc(sizeof(char) * size);

    /* Vérifie si malloc a échoué */
    if (array == NULL)
        return (NULL);

    /* Remplit le tableau avec le caractère c */
    for (i = 0; i < size; i++)
        array[i] = c;

    return (array);
}
