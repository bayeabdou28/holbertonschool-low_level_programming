#include "dog.h"

/**
* print_dog - Affiche les informations d'un chien
* @d: Pointeur sur la structure à afficher
*
* Description: Si un élément est NULL, affiche (nil).
* Si `d` est NULL, ne rien afficher.
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;

printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}

