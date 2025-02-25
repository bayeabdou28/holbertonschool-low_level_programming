#include "main.h"

/**
 * _isdigit - Vérifie si un caractère est un chiffre (0 à 9)
 * @c: Le caractère à vérifier
 * 
 * Return: 1 si c'est un chiffre, 0 sinon
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')  // Vérifie si c est entre '0' et '9'
return (1);  // Oui, c'est un chiffre !
else
return (0);  // Non, ce n'est pas un chiffre...
}
