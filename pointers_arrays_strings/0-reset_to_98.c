#include <stdio.h>

// Fonction qui met la valeur de n à 98
void reset_to_98(int *n) {
    *n = 98;
}

int main() {
int var = 42;  // Déclaration d'un entier
printf("Avant : %d\n", var);

reset_to_98(&var);  // On passe l'adresse de var à la fonction
printf("Après : %d\n", var);  // La valeur de var est maintenant 98

return 0; }
