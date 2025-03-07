#include <stdio.h>

int main(int argc, char *argv[])
{
    /* Le nombre d'arguments est argc, mais on soustrait 1 pour ne pas compter le programme lui-même */
    printf("%d\n", argc - 1);
    return 0;
}
