#ifndef DOG_H
#define DOG_H

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

/* Prototype de la fonction init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

