# Malloc Checked - Allocation dynamique de mémoire en C

## Description
Ce projet implémente une fonction `malloc_checked` qui alloue de la mémoire en utilisant `malloc`.  
Si l'allocation échoue, le programme termine avec le code d'erreur `98`.

## Fichiers du projet
- **`main.h`** : Contient le prototype de la fonction.
- **`0-malloc_checked.c`** : Implémente la fonction `malloc_checked`.
- **`0-main.c`** : Programme de test pour `malloc_checked`.

## Compilation et Exécution
### **Compilation**
Utilise la commande suivante pour compiler le programme :
```sh
gcc -Wall -Wextra -Werror -pedantic -o main 0-main.c 0-malloc_checked.c

