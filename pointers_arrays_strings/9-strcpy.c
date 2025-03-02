/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: Pointer to the destination array where the content is to be copied
 * @src: String to be copied
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (original_dest);
}
