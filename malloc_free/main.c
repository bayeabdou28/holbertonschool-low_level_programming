#include <stdio.h>
#include <stdlib.h>
#include "main.h"  /* Inclure le fichier d'en-tête */

int main(void)
{
    char *buffer;
    unsigned int size = 10;
    char c = 'H';

    /* Appelle la fonction create_array */
    buffer = create_array(size, c);

    /* Vérifie si l'allocation a échoué */
    if (buffer == NULL)
    {
        printf("Échec de l'allocation de mémoire\n");
        return (1);
    }

    /* Affiche le contenu du tableau */
    for (unsigned int i = 0; i < size; i++)
    {
        printf("%c", buffer[i]);
    }
    printf("\n");

    /* Libère la mémoire */
    free(buffer);

    return (0);
}

