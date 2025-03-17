#include "dog.h"

int main(void)
{
dog_t my_dog;

my_dog.name = "Rex";
my_dog.age = 5.5;
my_dog.owner = "Alice";

printf("Nom: %s\n", my_dog.name);
printf("Âge: %.1f\n", my_dog.age);
printf("Propriétaire: %s\n", my_dog.owner);

return (0);
}

