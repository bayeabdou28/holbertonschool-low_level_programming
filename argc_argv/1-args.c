#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: Number of arguments
 * @argv: Array of strings (arguments) (non utilisé ici)
 *
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
/* On affiche simplement argc, qui contient le nombre d'arguments */
printf("%d\n", argc - 1); /* Soustraire 1 pour ne pas compter le programme lui-même */
return (0);
}
