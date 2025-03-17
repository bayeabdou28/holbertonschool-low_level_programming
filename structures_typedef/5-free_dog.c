#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Libère la mémoire allouée pour un chien.
* @d: Pointeur vers la structure dog_t à libérer.
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}

