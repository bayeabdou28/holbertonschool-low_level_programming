#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c);

int main(void)
{
    char *array;
    unsigned int size = 10; /* Taille du tableau */
    char c = 'X';           /* Caractère d'initialisation */
    unsigned int i;

    /* Appel de la fonction create_array */
    array = create_array(size, c);
    if (array == NULL)
    {
        printf("Échec de l'allocation mémoire\n");
        return 1;
    }

    /* Affichage des éléments du tableau */
    for (i = 0; i < size; i++)
        printf("%c ", array[i]);
    printf("\n");

    /* Libération de la mémoire allouée */
    free(array);

    return 0;
}
