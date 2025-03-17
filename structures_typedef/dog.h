#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
* struct dog - Structure représentant un chien
* @name: Nom du chien
* @age: Âge du chien
* @owner: Nom du propriétaire
*/
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

/* Prototypes des fonctions */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d); /* Assure-toi que cette ligne est bien présente */

#endif /* DOG_H */

