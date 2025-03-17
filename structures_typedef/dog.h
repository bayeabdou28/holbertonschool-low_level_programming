#ifndef DOG_H
#define DOG_H

/**
* struct dog - Represents information about a dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Name of the dog's owner
*
* Description: This structure contains essential details about a dog,
* including its name, age, and owner's name.
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
