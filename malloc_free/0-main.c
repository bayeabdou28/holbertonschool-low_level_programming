#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c);

int main(void)
{
    char *array;
    unsigned int size = 5;
    char c = 'H';
    unsigned int i;

    array = create_array(size, c);
    if (array == NULL)
    {
        printf("Échec de l'allocation mémoire\n");
        return 1;
    }

    /* Affichage du tableau */
    for (i = 0; i < size; i++)
        printf("%c ", array[i]);
    printf("\n");

    free(array); /* Libération de la mémoire */
    return 0;
}
