#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: A pointer to an 8x8 array representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    /* Parcours chaque ligne de l'échiquier */
    for (i = 0; i < 8; i++)
    {
        /* Parcours chaque colonne de la ligne */
        for (j = 0; j < 8; j++)
        {
            _putchar(a[i][j]);  /* Affiche chaque caractère de l'échiquier */
        }
        _putchar('\n');  /* Nouvelle ligne après chaque ligne de l'échiquier */
    }
}

