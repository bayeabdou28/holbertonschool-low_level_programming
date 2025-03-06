/**
 * _strstr - Locate a substring in a string
 * @haystack: The main string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j;

    if (*needle == '\0') /* Si le substring est vide, retourne haystack */
        return (haystack);

    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0; needle[j] != '\0'; j++)
        {
            if (haystack[i + j] != needle[j]) /* Vérifie si les caractères correspondent */
                break;
        }
        if (needle[j] == '\0') /* Si on a parcouru tout needle, retourne le pointeur */
            return (haystack + i);
    }
    return (NULL); /* Retourne NULL si le substring n'est pas trouvé */
}

