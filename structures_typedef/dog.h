#ifndef DOG_H
#define DOG_H

#include <stddef.h> /* Pour NULL */
#include <stdio.h>  /* Pour printf */

/**
* struct dog - Structure définissant un chien
* @name: Nom du chien
* @age: Âge du chien
* @owner: Propriétaire du chien
*/
struct dog
{
char *name;
float age;
char *owner;
};

/* Nouveau type dog_t qui remplace struct dog */
typedef struct dog dog_t;

/* Prototypes des fonctions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

