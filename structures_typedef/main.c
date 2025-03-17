#include "dog.h"

int main(void)
{
struct dog my_dog = {"Rex", 5.5, "Alice"};
struct dog my_dog2 = {NULL, 3.0, NULL};

printf("=== Affichage du premier chien ===\n");
print_dog(&my_dog);

printf("\n=== Affichage du deuxième chien (avec NULL) ===\n");
print_dog(&my_dog2);

printf("\n=== Affichage d'un chien NULL ===\n");
print_dog(NULL);

return (0);
}

