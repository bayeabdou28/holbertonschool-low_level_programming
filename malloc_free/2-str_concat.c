#include <stdlib.h>

/**
* str_concat - Concatenates two strings into a newly allocated space in memory.
* @s1: The first string.
* @s2: The second string.
*
* Return: Pointer to the new concatenated string, or NULL if allocation fails.
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
int len1 = 0, len2 = 0, i, j;

/* Treat NULL as an empty string */
if (s1 != NULL)
{
while (s1[len1] != '\0')
    len1++;
}
if (s2 != NULL)
{
while (s2[len2] != '\0')
    len2++;
}

/* Allocate memory for concatenated string (+1 for null terminator) */
concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
return (NULL);

/* Copy s1 into concat */
for (i = 0; i < len1; i++)
concat[i] = s1[i];

/* Copy s2 into concat */
for (j = 0; j < len2; j++)
concat[i + j] = s2[j];

concat[i + j] = '\0'; /* Null-terminate the new string */

return (concat);
}

