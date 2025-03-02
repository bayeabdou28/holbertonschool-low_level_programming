/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to be appended
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;

/* Find the end of dest string */
for (i = 0; dest[i] != '\0'; i++)
;

/* Copy characters from src to dest */
for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}

/* Add terminating null byte */
dest[i + j] = '\0';

return (dest);
}
