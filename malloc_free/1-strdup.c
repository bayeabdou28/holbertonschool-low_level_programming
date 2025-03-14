#include <stdlib.h>
#include <string.h>

/**
* _strdup - Duplique une chaîne dans une nouvelle zone mémoire
* @str: Chaîne à copier
*
* Return: Pointeur vers la nouvelle chaîne, NULL si échec
*/
char *_strdup(char *str)
{
char *duplicate;
unsigned int length;

if (str == NULL)
return (NULL);

length = strlen(str) + 1;
duplicate = malloc(length *sizeof(char));

if (duplicate == NULL)
return (NULL);

strcpy(duplicate, str);
return (duplicate); }
