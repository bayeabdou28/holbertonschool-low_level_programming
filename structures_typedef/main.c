#include "dog.h"
#include <stdio.h>

int main(void)
{
dog_t *my_dog;

my_dog = new_dog("Poppy", 3.5, "Bob");  // ✅ Correct

if (my_dog == NULL)
{
printf("Échec de l'allocation mémoire\n");
return (1);
}

printf("Nom: %s\n", my_dog->name);
printf("Âge: %.1f\n", my_dog->age);
printf("Propriétaire: %s\n", my_dog->owner);

/* Libération mémoire */
free(my_dog->name);
free(my_dog->owner);
free(my_dog);

return (0);
}

