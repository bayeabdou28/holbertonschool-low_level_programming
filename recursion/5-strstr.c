#include "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: The main string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j;

    if (*needle == '\0') /* If needle is empty, return haystack */
        return (haystack);

    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0; needle[j] != '\0'; j++)
        {
            if (haystack[i + j] != needle[j]) /* Check if characters match */
                break;
        }
        if (needle[j] == '\0') /* If full needle was found, return pointer */
            return (haystack + i);
    }
    return (NULL); /* Return NULL if no match is found */
}
