#include <stddef.h>

/**
* _strchr - Localise un caractère dans une chaîne de caractères
* @s: Pointeur vers la chaîne de caractères
* @c: Caractère à localiser
*
* Return: Pointeur vers la première occurrence du caractère c, ou NULL
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return (NULL);
}
