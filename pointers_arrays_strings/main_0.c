#include <stdio.h>
#include "main.h"

/**
 * main - Teste la fonction _strlen
 *
 * Return: 0 (succès)
 */
int main(void)
{
    char str[] = "Hello, world!";
    int len;

    len = _strlen(str); /* Appelle la fonction _strlen */
    printf("Longueur de \"%s\": %d\n", str, len);

    return (0);
}

