#include "main.h"

/**
 * find_sqrt - Helper function to find the square root
 * @n: The number to find the square root of
 * @i: The current guess for the square root
 *
 * Return: The square root of n, or -1 if n has no natural square root
 */
int find_sqrt(int n, int i)
{
if (i * i > n) /* Si i^2 dépasse n, il n'a pas de racine carrée naturelle */
return (-1);
if (i * i == n) /* Si i^2 == n, i est la racine carrée */
return (i);
return (find_sqrt(n, i + 1)); /* Tester le prochain nombre */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0) /* Pas de racine carrée naturelle pour les nombres négatifs */
return (-1);
return (find_sqrt(n, 0)); /* Démarrer la recherche de la racine carrée */
}
