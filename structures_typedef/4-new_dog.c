#include "dog.h"
#include <stdlib.h> /* Pour malloc et free */
#include <string.h> /* Pour strcpy et strlen */

/**
* new_dog - Crée un nouveau chien et alloue dynamiquement de la mémoire.
* @name: Nom du chien.
* @age: Âge du chien.
* @owner: Propriétaire du chien.
*
* Return: Pointeur vers le nouveau chien, ou NULL si l'allocation échoue.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *new_name, *new_owner;

/* Vérifier les entrées */
if (name == NULL || owner == NULL)
return (NULL);

/* Allouer de la mémoire pour la structure dog_t */
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

/* Allouer et copier name */
new_name = malloc(strlen(name) + 1);
if (new_name == NULL)
{
free(dog);
return (NULL);
}
strcpy(new_name, name);

/* Allouer et copier owner */
new_owner = malloc(strlen(owner) + 1);
if (new_owner == NULL)
{
free(new_name);
free(dog);
return (NULL);
}
strcpy(new_owner, owner);

/* Initialiser les champs de la structure */
dog->name = new_name;
dog->age = age;
dog->owner = new_owner;

return (dog);
}

