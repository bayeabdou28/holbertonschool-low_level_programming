#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1); // Utiliser write pour afficher un caractère
}

