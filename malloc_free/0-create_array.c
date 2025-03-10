#include <stdlib.h>  /* Besoin de malloc#include <stdlib.h> // For malloc

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if size = 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    // Return NULL if size is 0
    if (size == 0)
        return NULL;

    // Allocate memory for the array
    array = (char *)malloc(size * sizeof(char));
    if (array == NULL) // Check if malloc failed
        return NULL;

    // Initialize the array with the specified character
    for (i = 0; i < size; i++)
        array[i] = c;

    return array;
}
