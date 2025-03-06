/**

_strpbrk - Recherche un ensemble de bytes dans une chaîne

@s: Chaîne à analyser

@accept: Ensemble de bytes à rechercher

Return: Pointeur vers le byte trouvé, ou NULL si non trouvé
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (NULL);
}
