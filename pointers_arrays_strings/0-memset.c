#include "main.h"

/**
 * _memset - Remplit une zone mémoire avec un octet constant.
 * @s: Pointeur vers la zone mémoire à remplir.
 * @b: Octet constant à utiliser pour remplir la mémoire.
 * @n: Nombre de premiers octets de la mémoire à remplir.
 *
 * Return: Retourne un pointeur vers la zone mémoire `s`.
 */
char *_memset(char *s, char b, unsigned int n) {
unsigned char *p = (unsigned char *)s;
while (n > 0) {
*p = b;
p++;
n--;
}
return (s);
}
