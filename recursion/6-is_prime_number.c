#include "main.h"

/**
 * check_prime - Helper function to check if a number is prime
 * @n: The number to check
 * @i: The current divisor being tested
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
if (n <= 1) /* Les nombres <= 1 ne sont pas premiers */
return (0);
if (i * i > n) /* Si aucun diviseur trouvé jusqu'à √n, alors n est premier */
return (1);
if (n % i == 0) /* Si n est divisible par i, ce n'est pas un nombre premier */
return (0);
return (check_prime(n, i + 1)); /* Tester le prochain diviseur */
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
return (check_prime(n, 2)); /* Vérification à partir de 2 */
}
