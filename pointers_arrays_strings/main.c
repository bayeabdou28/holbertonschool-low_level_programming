#include <stdio.h>

// Déclaration de la fonction
void swap_int(int *a, int *b);

int main() {
    int x = 10, y = 20;  // Déclaration et initialisation des variables
    printf("Avant échange : x = %d, y = %d\n", x, y);

    swap_int(&x, &y);  // Appel de la fonction avec les adresses des variables
    printf("Après échange : x = %d, y = %d\n", x, y);

    return 0;
}

// Définition de la fonction swap_int
void swap_int(int *a, int *b) {
    int temp = *a;  // Stocke la valeur de *a
    *a = *b;        // Met *b dans *a
    *b = temp;      // Met temp (ancienne *a) dans *b
}

