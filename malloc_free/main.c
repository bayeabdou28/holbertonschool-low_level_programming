#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c);

int main(void)
{
    unsigned int size = 10;
    char c = 'A';
    char *array;
    unsigned int i;

    array = create_array(size, c);
    if (array == NULL)
    {
        printf("Failed to create array.\n");
        return 1;
    }

    for (i = 0; i < size; i++)
    {
        printf("%c ", array[i]); /* Should print 'A' 10 times */
    }
    printf("\n");

    free(array); /* Free the allocated memory */
    return 0;
}
