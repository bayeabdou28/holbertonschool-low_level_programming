#include <stdio.h>
#include "main.h"

/**
 * main - Test the _strlen_recursion function
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str = "Holberton";
    int len;

    len = _strlen_recursion(str);
    printf("Length of '%s': %d\n", str, len);
    return (0);
}

