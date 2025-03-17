#include <stdio.h>
#include <stdlib.h>
#include "your_header.h" // Remplace par le bon nom de fichier si nécessaire

int main(void)
{
int *arr;
unsigned int size = 10; // Taille en octets de la mémoire à allouer (exemple)

// Appel de malloc_checked pour allouer de la mémoire
arr = (int *)malloc_checked(size * sizeof(int));

if (arr == NULL)
{
printf("L'allocation de mémoire a échoué\n");
return (1);
}

// Exemple d'utilisation : Initialisation et affichage
for (unsigned int i = 0; i < size; i++)
{
arr[i] = i * 2; // Remplissage du tableau avec des valeurs
printf("%d ", arr[i]);
}
printf("\n");

free(arr); // Libération de la mémoire allouée

return (0);
}

