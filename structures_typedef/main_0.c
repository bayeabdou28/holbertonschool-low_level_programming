#include <stdio.h>
#include "dog.h"

int main(void)
{
struct dog my_dog;

init_dog(&my_dog, "Rex", 5.5, "Alice");

printf("Nom: %s\n", my_dog.name);
printf("Âge: %.1f\n", my_dog.age);
printf("Propriétaire: %s\n", my_dog.owner);

return (0);
}
