/**
* _strspn - Obtient la longueur d'un préfixe composé uniquement de certains caractères
* @s: La chaîne principale
* @accept: La chaîne contenant les caractères acceptés
*
* Return: Nombre de bytes dans le segment initial de s qui ne contiennent que des bytes de accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0;
int found;

for (i = 0; s[i] != '\0'; i++)
{
found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
found = 1;
break;
}
}
if (!found)
break;
}
return (count);
}
