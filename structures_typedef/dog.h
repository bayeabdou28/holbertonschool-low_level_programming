#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
* struct dog - Structure définissant un chien.
* @name: Nom du chien.
* @age: Âge du chien.
* @owner: Propriétaire du chien.
*/
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;  /* Définition de dog_t */

/* Prototypes des fonctions */
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */

