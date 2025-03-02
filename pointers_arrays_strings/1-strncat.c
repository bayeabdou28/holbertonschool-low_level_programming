/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to use from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *original_dest = dest;
int dest_len = 0;
int i;

/* Find the end of dest string */
while (dest[dest_len] != '\0')
dest_len++;

/* Copy at most n bytes from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

/* Add terminating null byte */
dest[dest_len + i] = '\0';

return original_dest;
}
