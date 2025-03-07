#include "main.h"

int main(int argc, char *argv[])
{
    // Utilisation de _putchar pour afficher le nom du programme
    char *program_name = argv[0];

    while (*program_name)
    {
        _putchar(*program_name);
        program_name++;
    }
    _putchar('\n');
    
    return 0;
}

