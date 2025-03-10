#include <stdlib.h> /* Pour malloc */

/*
 * create_array - Crée un tableau de caractères et l'initialise avec un caractère spécifique.
 * @size: Taille du tableau à créer.
 * @c: Caractère utilisé pour l'initialisation.
 *
 * Return: Pointeur vers le tableau alloué, NULL si size = 0 ou si l'allocation échoue.
 */
char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    /* Gestion du cas où size = 0 */
    if (size == 0)
        return NULL;

    /* Allocation mémoire */
    array = (char *)malloc(size * sizeof(char));
    if (array == NULL) /* Vérification de l'échec de malloc */
        return NULL;

    /* Initialisation du tableau */
    for (i = 0; i < size; i++)
        array[i] = c;

    return array;
}
