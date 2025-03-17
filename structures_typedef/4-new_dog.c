#include "dog.h"
#include <stdlib.h>

/**
* my_strlen - Calcule la longueur d'une chaîne de caractères.
* @s: La chaîne à mesurer.
*
* Return: La longueur de la chaîne.
*/
int my_strlen(char *s)
{
int len = 0;

while (s && s[len])
len++;

return (len);
}

/**
* my_strcpy - Copie une chaîne de caractères dans un nouvel espace mémoire.
* @src: La chaîne source.
*
* Return: Un pointeur vers la copie de la chaîne, ou NULL si l'allocation échoue.
*/
char *my_strcpy(char *src)
{
int len = my_strlen(src);
char *dest = malloc(len + 1);
int i;

if (!dest)
return (NULL);

for (i = 0; i < len; i++)
dest[i] = src[i];

dest[i] = '\0';  /* Ajout du caractère nul */
return (dest);
}

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

/* Allouer de la mémoire pour la structure */
dog = malloc(sizeof(dog_t));
if (!dog)
return (NULL);

/* Copier name et owner en utilisant my_strcpy */
dog->name = my_strcpy(name);
dog->owner = my_strcpy(owner);

/* Vérifier si les allocations ont réussi */
if (!dog->name || !dog->owner)
{
free(dog->name);
free(dog->owner);
free(dog);
return (NULL);
}

/* Assigner l'âge */
dog->age = age;

return (dog);
}

