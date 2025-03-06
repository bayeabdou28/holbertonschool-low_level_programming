#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The main string to search in.
 * @needle: The substring to find.
 *
 * Return: Pointer to the beginning of the located substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
char *h, *n;

if (*needle == '\0') /* Si needle est vide, retourne haystack */
return (haystack);

while (*haystack)
{
h = haystack;
n = needle;

while (*h && *n && (*h == *n)) /* Vérifie si les caractères correspondent */
{
h++;
n++;
}

if (*n == '\0') /* Si on a atteint la fin de needle, on a trouvé la sous-chaîne */
return (haystack);

haystack++;
}

return (NULL); /* Si la sous-chaîne n'est pas trouvée */
}
