#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Vérifie si une chaîne ne contient que des chiffres
 * @str: Chaîne de caractères à vérifier
 *
 * Return: 1 si c'est un nombre, 0 sinon
 */
int is_number(char *str)
{
int i = 0;

while (str[i])
{
if (!isdigit(str[i])) /* Vérifie si chaque caractère est un chiffre */
return (0);
i++;
}
return (1);
}

/**
 * main - Additionne des nombres positifs passés en arguments
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 *
 * Return: 0 si succès, 1 en cas d'erreur
 */
int main(int argc, char *argv[])
{
int sum = 0, i, num;

if (argc == 1) /* Aucun nombre fourni */
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (!is_number(argv[i])) /* Vérifie si l'argument est un nombre */
{
printf("Error\n");
return (1); }

num = atoi(argv[i]); /* Convertit la chaîne en entier */
sum += num;
}

printf("%d\n", sum); /* Affiche la somme */
return (0);
}
