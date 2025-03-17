/**
* init_dog - Initializes a variable of type struct dog
* @d: Pointer to struct dog to initialize
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Description: This function initializes a struct dog variable
* with the provided name, age, and owner information.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
