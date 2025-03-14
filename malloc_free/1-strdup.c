#include <stdlib.h>
#include <string.h>

/**
* _strdup - Returns a pointer to a new string which is a duplicate of str
* @str: The string to duplicate
*
* Return: Pointer to the duplicated string, or NULL if memory allocation fails
*/
char *_strdup(char *str)
{
char *dup;
int len, i;

if (str == NULL)
return (NULL);

len = 0;
while (str[len] != '\0')
len++;

dup = malloc(sizeof(char) * (len + 1));  /* Allocate memory */
if (dup == NULL)
return (NULL);

for (i = 0; i < len; i++)  /* Copy characters */
dup[i] = str[i];
dup[len] = '\0';  /* Null-terminate the new string */

return (dup);
}

