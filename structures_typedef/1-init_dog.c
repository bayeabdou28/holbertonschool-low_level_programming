#ifndef DOG_H
#define DOG_H

/**
* struct dog - Représente les informations d'un chien
* @name: Nom du chien
* @age: Âge du chien
* @owner: Nom du propriétaire du chien
*
* Description: Cette structure contient les détails essentiels d'un chien,
* incluant son nom, son âge et le nom de son propriétaire.
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

