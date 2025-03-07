#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The main string to search in.
 * @needle: The substring to find.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j;

    /* Si needle est une chaîne vide, retourne haystack */
    if (*needle == '\0')
        return (haystack);

    /* Parcours chaque caractère de haystack */
    for (i = 0; haystack[i] != '\0'; i++)
    {
        /* Compare chaque caractère de needle avec ceux de haystack */
        for (j = 0; needle[j] != '\0'; j++)
        {
            /* Si les caractères ne correspondent pas, on quitte la boucle */
            if (haystack[i + j] != needle[j])
                break;
        }

        /* Si toute la chaîne needle a été trouvée */
        if (needle[j] == '\0')
            return (haystack + i);
    }

    /* Si needle n'a pas été trouvée, retourne NULL */
    return (NULL);
}
