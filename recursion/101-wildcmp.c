#include "main.h"

/**
 * wildcmp - Compare two strings allowing for wildcard pattern '*'
 * @s1: The first string
 * @s2: The second string, which can contain the wildcard '*'
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*') /* Si on rencontre un '*' */
{
if (!*s1) /* Si s1 est vide, vérifier si s2 a uniquement des '*' */
return (*(s2 + 1) == '\0' ? 1 : wildcmp(s1, s2 + 1));
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}

if (*s1 == '\0' || *s2 == '\0') /* Si l'une des chaînes est vide */
return (*s1 == *s2);

if (*s1 == *s2) /* Si les caractères sont égaux, continuer */
return (wildcmp(s1 + 1, s2 + 1));

return (0); /* Sinon, les chaînes sont différentes */
}
