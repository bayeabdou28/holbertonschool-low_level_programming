#include <stdlib.h>

/**
* string_nconcat - Concatène deux chaînes de caractères.
* @s1: Première chaîne.
* @s2: Deuxième chaîne.
* @n: Nombre de caractères de s2 à concaténer.
*
* Return: Pointeur vers la mémoire allouée contenant la nouvelle chaîne,
*         NULL si l'allocation échoue.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *new_str;

/* Vérifier si s1 ou s2 sont NULL, les traiter comme des chaînes vides */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Calcul de la longueur de s1 et s2 */
while (s1[len1])
len1++;
while (s2[len2])
len2++;

/* Utiliser toute la chaîne s2 si n est plus grand que sa longueur */
if (n > len2)
n = len2;

/* Allocation de mémoire pour la nouvelle chaîne */
new_str = malloc(sizeof(char) * (len1 + n + 1));
if (new_str == NULL)
return (NULL);

/* Copier s1 dans new_str */
for (i = 0; i < len1; i++)
new_str[i] = s1[i];

/* Copier les n premiers caractères de s2 dans new_str */
for (j = 0; j < n; j++)
new_str[i + j] = s2[j];

/* Null-terminer la nouvelle chaîne */
new_str[i + j] = '\0';

return (new_str);
}

