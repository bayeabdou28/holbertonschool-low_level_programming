#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base number
 * @y: The exponent
 *
 * Return: x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
if (y < 0) /* Gérer l'erreur si y est négatif */
{
return (-1);
}
if (y == 0) /* Toute base élevée à la puissance 0 est 1 */
{
return (1);
}

return (x * _pow_recursion(x, y - 1)); /* Appel récursif */
}
