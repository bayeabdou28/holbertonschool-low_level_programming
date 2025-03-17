#include <stdlib.h> /* Pour malloc */
#include <stdio.h>  /* Pour printf (test) */

/**
* _calloc - Alloue la mémoire pour un tableau et initialise à zéro.
* @nmemb: Nombre d'éléments.
* @size: Taille en octets de chaque élément.
*
* Return: Pointeur vers la mémoire allouée, ou NULL en cas d'échec.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;

/* Vérification des paramètres : si nmemb ou size est 0, retourne NULL */
if (nmemb == 0 || size == 0)
return (NULL);

/* Allocation de mémoire */
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

/* Initialisation de la mémoire à zéro */
for (i = 0; i < (nmemb * size); i++)
ptr[i] = 0;

return (ptr);
}

