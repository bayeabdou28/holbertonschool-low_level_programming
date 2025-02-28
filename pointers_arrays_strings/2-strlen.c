int _strlen(char *s)
{
int length = 0;  // Initialiser le compteur à 0
    
// Parcourir chaque caractère jusqu'à ce qu'on atteigne '\0'
while (s[length] != '\0')
{length++;  // Incrémenter le compteur pour chaque caractère
}
    
return length;  // Retourner la longueur de la chaîne }
