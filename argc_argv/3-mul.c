#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and prints the result
 * @argc: Number of arguments
 * @argv: Array of strings (arguments)
 *
 * Return: 0 if success, 1 if error (not exactly 2 numbers provided)
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

/* Vérifie que deux arguments sont passés */
if (argc != 3)
{
printf("Error\n");
return (1);
}

/* Convertit les arguments en entiers et effectue la multiplication */
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;

/* Affiche le résultat */
printf("%d\n", result);

return (0);
}
