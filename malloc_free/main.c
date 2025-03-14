#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Test the str_concat function.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Hello, ", "world!");
    if (s == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    printf("%s\n", s); /* Expected output: Hello, world! */
    free(s);

    return (0);
}

