#include <stdlib.h> /* Inclusion de stdlib.h pour malloc et exit */

/**
* malloc_checked - Alloue de la mémoire en utilisant malloc.
* @b: Taille en octets à allouer.
*
* Return: Un pointeur vers la mémoire allouée.
*         Termine le programme avec un statut de 98 si malloc échoue.
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}

return (ptr);
}

