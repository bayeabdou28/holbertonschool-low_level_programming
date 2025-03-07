#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: A pointer to the matrix (represented as a 1D array).
 * @size: The size of the square matrix (number of rows/columns).
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;

/* Calcule la somme de la première diagonale (haut-gauche à bas-droite) */
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
}

/* Calcule la somme de la deuxième diagonale (haut-droite à bas-gauche) */
for (i = 0; i < size; i++)
{
sum2 += a[i * size + (size - i - 1)];
}

/* Affiche les sommes des deux diagonales */
printf("%d, %d\n", sum1, sum2);
}
