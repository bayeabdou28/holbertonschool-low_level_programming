#include "main.h"
#include <stdio.h>

/**
 * main - Test the _strstr function
 *
 * Return: Always 0.
 */
int main(void)
{
    char *haystack = "hello, world";
    char *needle = "world";
    char *result;

    result = _strstr(haystack, needle);
    if (result != NULL)
        printf("Found substring: %s\n", result);
    else
        printf("Substring not found\n");

    return (0);
}
